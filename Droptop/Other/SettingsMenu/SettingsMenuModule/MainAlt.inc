[Rainmeter]

[Variables]
ActionTimer.StartAnimation=1

[VersionStyle0]
Text="#SettingsVersion# (Basic)"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[VersionStyle1]
Text="#SettingsVersion#  🤍"
FontColor=#DropdownFontColor1#,128
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
ImageName=#@#Icons\Fixed\#IconSize#\merge.png
ImageAlpha=128

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[2]
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DividerSpace#*2)R

[7]
MeterStyle=InfoStyle | VersionStyle#Supporter#
Y=(#DividerSpace#*2)R

[7Icon]
MeterStyle=IconStyle | VersionStyle#Supporter#
Y=(#DividerSpace#*2)R