@REM @echo off
@REM title Droptop_Task_Helper

@REM set "app=%~1"

@REM :loop
@REM tasklist /fi "imagename eq %app%" | find /i "%app%" > nul

@REM if %errorlevel% neq 0 (
@REM     start "" "%app%"
@REM )

@REM timeout /t 10 > nul
@REM goto loop

@echo off
setlocal enabledelayedexpansion

taskkill /f /im timeout.exe /t >nul 2>&1

tasklist /fi "imagename eq cmd.exe" /v | find "Droptop_Task_Helper" > nul && (
    echo Already running
    exit
)

title Droptop_Task_Helper

set "app=%~1"

:loop
tasklist /fi "imagename eq %app%" | find /i "%app%" > nul

if !errorlevel! neq 0 (
    start "" "%app%"
)

timeout /t 10 > nul
goto loop