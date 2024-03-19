[AutoStartup]
Measure=Calc
Formula=Counter
IfCondition=(AutoStartup=1)
IfTrueAction=[!Delay [##MyAppID#]00][!UpdateMeasure Plugin.WebView]

[Plugin.WebView]
Measure=Plugin
Plugin=WebView
URL=#WebViewURL#
X=(#DropdownMenuCutout#+(#DropdownStrokeWidth#/2))
Y=#WebViewTopHeight#
W=(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)-#DropdownStrokeWidth#)
H=(#WebViewHeight#-#WebViewTopHeight#)
DynamicVariables=1
UpdateDivider=-1
Disabled=1

[WebViewWhiteBG]
Meter=Image
SolidColor=#WebViewBackgroundColor#
X=(#DropdownMenuCutout#+(#DropdownStrokeWidth#/2))
Y=#WebViewTopHeight#
W=(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)-#DropdownStrokeWidth#)
H=(#WebViewHeight#-#WebViewTopHeight#-1)
MouseOverAction=[!UpdateMeasure Plugin.WebView]