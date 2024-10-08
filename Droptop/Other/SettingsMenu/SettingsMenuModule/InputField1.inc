[Rainmeter]
Group=DroptopSuite

[Variables]
DropdownItemPadding1=#DropdownNoIconPadding#

[IconStyle]
ImageName=
ImageFlip=None

[1]
AntiAlias=1
SolidColor=#DropdownFontColor1#,128
FontColor=#DropdownBGColor1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]

[2]
Text=""
MouseOverAction=[]
MouseLeaveAction=[]

[3]
FontColor=#DropdownFontColor1#,128
MouseOverAction=[]
MouseLeaveAction=[]
Y=(#DropdownItemHeight#*(#NumberOfItems#-1)+((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
Hidden=0

[4]
Hidden=0

[1InputField]
Measure=Plugin
Plugin=InputText.dll
FontColor=#DropdownBGColor1#
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
AntiAlias=1
SolidColor=#DropdownFontColor1#
W=[1:W]
H=#DropdownItemHeight#
X=[1:X]
Y=[1:Y]
Command1=[!WriteKeyValue Variables FolderTitle[#SlotFolder[#SettingsMenuIndex2]] "$UserInput$" "#@#GlobalVar\UserSettings.inc"][!Refresh "Droptop\DropdownBar"][!Refresh]
DefaultValue="[#FolderTitle[#SlotFolder[#SettingsMenuIndex2]]]"
DynamicVariables=1