[Rainmeter]

[Variables]

SupportText0=#SettingsUpdateText4#
SupportText1=#SettingsSupport5#

SupportIcon0=thumbsup
SupportIcon1=cloud

SupportAction0=["https://gumroad.com/l/droptop"]#CloseSettingsMenu#
SupportAction1=[!WriteKeyValue Variables ManuallyChecked 1 "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\CheckUpdate.ini"][!DisableMouseAction [#*CURRENTSECTION*] "LeftMouseDownAction"][!SetVariable AnimateIconNum [#*CURRENTSECTION*]][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 5"][!SetOption 5Icon ImageName "#@#Icons\Fixed\#IconSize#\refresh.png"][!WriteKeyValue Variables UpdateCheckFrequency 2 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables NotificationText "#SettingsUpdateText1#" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move [#*CURRENTCONFIGX*] ([#*CURRENTCONFIGY*]+[[#*CURRENTSECTION*]:Y]) "Droptop\Other\NotificationPopup"][!DeactivateConfig "Droptop\Other\BackgroundProcesses\Tasks"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "CheckUpdate.ini"][!Delay 4000][!EnableMouseAction [#*CURRENTSECTION*] "LeftMouseDownAction"]

[5]
Y=(#DividerSpace#*2)R

[5Icon]
Y=(#DividerSpace#*2)R

[6]

[7]
Y=(#DividerSpace#*2)R

[7Icon]
Y=(#DividerSpace#*2)R

[9]
Y=(#DividerSpace#*2)R

[9Icon]
Y=(#DividerSpace#*2)R

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*4)-(#DividerHeight#/2))

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[Divider3]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*5)+(#DropdownItemHeight#*8)-(#DividerHeight#/2))