[Rainmeter]

[Variables]

; [CheckHideIcons]
; Measure=Calc
; IfCondition=#HideIcons#=1
; IfTrueAction=[!SetOption 2 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 3 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 2Icon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!DisableMouseAction 2 "*"][!DisableMouseAction 3 "*"][!UpdateMeter *][!Redraw]
; IfFalseAction=[!SetOption 2 FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 3 FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 2Icon ImageAlpha 255][!EnableMouseAction 2 "*"][!EnableMouseAction 3 "*"[!SetOption 2Icon ImageAlpha (#*DropdownItemOpacity*#/3)"]][!UpdateMeter *][!Redraw]
; IfConditionMode=1
; DynamicVariables=1
; UpdateDivider=-1