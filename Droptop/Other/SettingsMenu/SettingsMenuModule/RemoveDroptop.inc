[Rainmeter]

[Variables]
FontWeight=800
DropdownBGColor1=218,55,60
DropdownFontColor1=255,255,255
DropdownFontColor2=218,55,60
DropdownItemHL=255,255,255
DropdownItemHL2=[#*DropdownItemHL*]
HighlightShapeOpacity=255
HighlightFontOpacity2=255
DropdownItemOpacity=255
DropdownMenuOpacity1=255
DropdownHLOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=1
HighlightShapeOpacityDivisor2B=1
DropdownStrokeWidth=0

[RunCommand.Exit]
Measure=Plugin
Plugin=RunCommand
Parameter=taskkill /f /im "Droptop.exe"
State=Hide
OutputType=ANSI
OutputFile=