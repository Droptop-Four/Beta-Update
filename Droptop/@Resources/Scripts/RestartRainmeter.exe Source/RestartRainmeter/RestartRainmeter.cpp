/*
*        Name: RestartRainmeter.cpp
*      Author: Brian Ferguson
*     Website: https://github.com/brianferguson/rainmeter-restart/
*        Date: 2021.06.01
*     Version: 1.0
*     License: CC BY-NC-SA 4.0  https://creativecommons.org/licenses/by-nc-sa/4.0/
* Description: This will quit Rainmeter (if it is running), then restart Rainmeter
*/

#define RESTART_RAINMETER_CLASSNAME			L"RestartRainmeterClass"
#define RESTART_RAINMETER_TITLE				L"Restart Rainmeter"

#define RAINMETER_QUERY_CLASS_NAME			L"RainmeterTrayClass"
#define RAINMETER_QUERY_ID_PROGRAM_PATH		4104
#define WM_QUERY_RAINMETER					(WM_APP + 1000)

#include <SDKDDKVer.h>
#include <windows.h>
#include <shellapi.h>
#include <objbase.h>
#include <TlHelp32.h>
#include <string>

constexpr UINT     g_ResponseInterval = 2000U;   // milliseconds
constexpr UINT_PTR g_ResponseEventID  = 1000ULL;
constexpr UINT     g_AppCloseInterval = 500U;    // milliseconds
constexpr UINT_PTR g_AppCloseEventID  = 2000ULL;
constexpr UINT     g_MaxNumberOfTries = 10U;

std::wstring       g_RainmeterPath    = L"";
UINT               g_NumberOfTries    = 0U;


bool IsRainmeterRunning();
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(HINSTANCE instance, HINSTANCE prevInstance, LPWSTR cmdLine, int cmdShow)
{
	// Only 1 instance of this program needs to run at a time
	HANDLE mutex = CreateMutex(nullptr, FALSE, L"RestartRainmeter");
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		mutex = nullptr;
		return 0;
	}

	HRESULT hr = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);
	if (FAILED(hr)) return 1;

	// Create an invisible window that receives messages
	WNDCLASSEXW wcex{};
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = instance;
	wcex.hIcon = nullptr;
	wcex.hCursor = nullptr;
	wcex.hbrBackground = nullptr;
	wcex.lpszMenuName = nullptr;
	wcex.lpszClassName = RESTART_RAINMETER_CLASSNAME;
	wcex.hIconSm = nullptr;
	if (!RegisterClassExW(&wcex)) return 1;

	HWND window = CreateWindowEx(WS_EX_TRANSPARENT, RESTART_RAINMETER_CLASSNAME, RESTART_RAINMETER_TITLE,
		WS_OVERLAPPEDWINDOW, 0, 0, 0, 0, nullptr, nullptr, instance, nullptr);
	if (!window) return 1;

	// Check if Rainmeter is running and get a handle to its 'query' window
	HWND rainmeter = FindWindow(RAINMETER_QUERY_CLASS_NAME, nullptr);
	if (!IsRainmeterRunning() || !rainmeter) return 0;

	// Query Rainmeter for its 'program path'
	PostMessage(rainmeter, WM_QUERY_RAINMETER, RAINMETER_QUERY_ID_PROGRAM_PATH, (LPARAM)window);

	BOOL ret = FALSE;
	MSG msg;
	while ((ret = GetMessage(&msg, nullptr, 0, 0)) != 0)
	{
		if (ret == -1) break;
		
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	CoUninitialize();
	return (int)msg.wParam;
}

bool IsRainmeterRunning()
{
	bool isRunning = false;
	HANDLE thSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (thSnapshot != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 processEntry = { sizeof(processEntry) };
		if (Process32First(thSnapshot, &processEntry))
		{
			do
			{
				if (wcscmp(processEntry.szExeFile, L"Rainmeter.exe") == 0)
				{
					isRunning = true;
					break;
				}
			} while (Process32Next(thSnapshot, &processEntry));
		}
		CloseHandle(thSnapshot);
	}
	return isRunning;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CREATE:
		SetTimer(hWnd, g_ResponseEventID, g_ResponseInterval, nullptr);  // Force close this app if Rainmeter doesn't respond
		break;

	case WM_TIMER:
		switch (wParam)
		{
		case g_ResponseEventID:
			PostQuitMessage(0);  // Rainmeter never responded to the query
			break;

		case g_AppCloseEventID:
			{
				if (g_NumberOfTries >= g_MaxNumberOfTries)  // Rainmeter still hasn't closed, so quit this program
				{
					PostQuitMessage(1);
				}
				else if (IsRainmeterRunning())
				{
					SetTimer(hWnd, g_AppCloseEventID, g_AppCloseInterval, nullptr);  // Rainmeter hasn't closed yet, wait a little longer
					++g_NumberOfTries;
				}
				else
				{
					// Rainmeter has finally closed, restart it and close this program
					ShellExecute(nullptr, L"open", g_RainmeterPath.c_str(), L"", nullptr, SW_SHOWNORMAL);
					PostQuitMessage(0);
				}
			}
			break;
		}
		break;

	case WM_COPYDATA:
		{
			COPYDATASTRUCT* cds = (COPYDATASTRUCT*)lParam;
			switch (cds->dwData)
			{
			case RAINMETER_QUERY_ID_PROGRAM_PATH:
				{
					KillTimer(hWnd, g_ResponseEventID);  // Got a response, no need to close this program yet

					g_RainmeterPath = (WCHAR*)cds->lpData;
					g_RainmeterPath += L"Rainmeter.exe";

					// Ask Rainmeter to quit nicely, and wait for it to be closed
					ShellExecute(nullptr, L"open", g_RainmeterPath.c_str(), L"!Quit", nullptr, SW_SHOWNORMAL);
					SetTimer(hWnd, g_AppCloseEventID, g_AppCloseInterval, nullptr);
				}
				break;
			}
		}
		break;

	case WM_DESTROY:
		KillTimer(hWnd, g_ResponseEventID);
		KillTimer(hWnd, g_AppCloseEventID);
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
