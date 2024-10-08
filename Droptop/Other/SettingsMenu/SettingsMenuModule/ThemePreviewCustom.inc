[Rainmeter]
@IncludeThemeOptions=#@#Themes\99Settings.inc
@IncludeThemeDesign=#@#Themes\99.inc

[Variables]

SettingsMenuNumber=1.2.23

[MeasureTime]
Measure=Time
Format="%Y/%m/%d @ %H:%M"
DynamicVariables=1

[MeasureVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

; [MeasureSaveTheme]
; Measure=Plugin
; Plugin=RunCommand
; Parameter=RD /S /Q "#SKINSPATH#Droptop\@Resources\Themes\My saved theme" & mkdir "#SKINSPATH#Droptop\@Resources\Themes\My saved theme" & xcopy /y /f /i "#SKINSPATH#Droptop\@Resources\Themes\99.inc" "#SKINSPATH#Droptop\@Resources\Themes\My saved theme" & xcopy /y /f /i "#SKINSPATH#Droptop\@Resources\Themes\99Settings.inc" "#SKINSPATH#Droptop\@Resources\Themes\My saved theme" & cd "#SKINSPATH#Droptop\@Resources\Themes\My saved theme" & tar.exe -a -c -f "#CustomThemeName# by #CustomThemeAuthor#.zip" "99.inc" "99Settings.inc" & del /f "#SKINSPATH#Droptop\@Resources\Themes\My saved theme\99.inc" & del /f "#SKINSPATH#Droptop\@Resources\Themes\My saved theme\99Settings.inc"
; State=Hide
; OutputType=ANSI
; OutputFile=
; FinishAction=["#@#Themes\My saved theme"]

[MeasureSupporter]
Measure=Calc
IfCondition=(#Supporter#=0) && (#SettingsMenuIndex#>4) && (#SettingsMenuIndex#<23)
IfTrueAction=[!SetOption 1 Text "Get the supporter version"][!SetOption 1 LeftMouseDownAction """["https://gumroad.com/l/droptop"]#*CloseSettingsMenu*#"""]
UpdateDivider=-1

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R
FontColor=#DropdownFontColor1#,([#DropdownItemOpacity]/2)
MouseOverAction=[]
MouseLeaveAction=[]

[2Icon]
Y=(#DividerSpace#*2)R

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*2)-(#DividerHeight#/2))

[3]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R
MiddleMouseDownAction=#HideSettingsMenu#["#CONFIGEDITOR#" "#@#Themes\99.inc"]["#CONFIGEDITOR#" "#@#Themes\99Settings.inc"]#CloseSettingsMenu#

[3Icon]
Y=(#DividerSpace#*2)R

[3Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*2)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[Divider3]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*5)+(#DropdownItemHeight#*3)-(#DividerHeight#/2))

[4]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R
MiddleMouseDownAction=#HideSettingsMenu#["#CONFIGEDITOR#" "#@#Themes\99.inc"]["#CONFIGEDITOR#" "#@#Themes\99Settings.inc"]#CloseSettingsMenu#

[4Icon]
Y=(#DividerSpace#*2)R

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*2)+(#DividerSpace#*4))
W=#DropdownMenuWidth#
H=#DropdownItemHeight#
LeftMouseDownAction=[!SetTransparencyGroup 0 SM4][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.2.23.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu4\SettingsMenu4.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu4\SettingsMenu4.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu4\SettingsMenu4.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!DeactivateConfig "Droptop\Other\SettingsMenu\SettingsMenu4"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu4"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]) "Droptop\Other\SettingsMenu\SettingsMenu4"][!ShowFade "Droptop\Other\SettingsMenu\SettingsMenu4"][!UpdateMeter HighlightSelected][!Redraw][!CommandMeasure MeasureActionTimer "Stop 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"]
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Group=Items

[HighlightSelected]
Shape=
Shape2=
Shape3=
Shape4=
