[Variables]
ShowDevTools=0

LastFocusedApp="[#***LastFocusedApp***]"

[SkinVersionMini]
Measure=Calc
Formula=((#SkinVersionMini#+1)>999?0:(#SkinVersionMini#+1))
Substitute=

[SkinVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

[CheckUsernames]
Measure=String
String=%USERNAME%
IfMatch=Carib|thomas.whittaker|Mike.Boynton|mkboy|alebu|saagg|KazukiGames82
IfMatchAction=[!SetVariable ShowDevTools 1][!UpdateMeter *][!Redraw]

[PSRM.ReplaceInFile]
Measure=Plugin
Plugin=PowershellRM
Line=$replace1 = 'C:\\Users\\.*?\\'; $replace2 = 'C:\Users\%USERNAME%\'; $path = "$env:USERPROFILE\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\Other\DroptopWorkspace"; $encoding = 'utf8'
Line2=function Run() { iwr -useb "#GitPS1Loc#ReplaceInFile.ps1" | iex }
OnChangeAction=
UpdateDivider=-1

[PSRM.TranslationEncoding]
Measure=Plugin
Plugin=PowershellRM
Line=$parentFolderPath = "#SKINSPATH#Droptop\@Resources\GlobalVar"
Line2=function Run() { iwr -useb "#GitPS1Loc#TranslationEncoding.ps1" | iex }
OnChangeAction=
UpdateDivider=-1

[DevToolsStyle0]
Y=0
Hidden=1

[DevToolsStyle1]
Y=([Background:YH]+(3*#DroptopSize#))
Hidden=0

[AnimationContainer]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimation#),((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+((#DropdownItemHeight#*4+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+#DropdownItemYOffset#+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)+#DropdownMenuCutout#-(#DropdownMenuCutout#*2))*#ShowDevTools#)),#DropdownBGCorner# | Fill Color 255,255,255,(255*#ActionTimer.StartAnimation#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,(255*#ActionTimer.StartAnimation#)

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle | DevToolsStyle#ShowDevTools#
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*4+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1
Container=AnimationContainer

[Developer1]
Meter=String
MeterStyle=InfoStyle | DevToolsStyle#ShowDevTools#
Text=Toggle Supporter ON/OFF
LeftMouseDownAction=[!SetVariable Supporter ([#Supporter]=0?1:0)][!WriteKeyValue Variables Supporter [#Supporter] "#@#GlobalVar\Supporter.inc"][!UpdateMeter #CURRENTSECTION#Icon][!Redraw]
Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))

[Developer1Icon]
Meter=Image
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=([#Supporter]<>1?([#DropdownItemOpacity]/3):[#DropdownItemOpacity])
ImageFlip=[#IconFlip0[#Supporter]]
MeterStyle=IconStyle | DevToolsStyle#ShowDevTools#
Y=[Developer1:Y]

[Developer2]
Meter=String
MeterStyle=InfoStyle | DevToolsStyle#ShowDevTools#
Text=Auto-switch to Alt Home
LeftMouseDownAction=[!SetVariable AutoAltHome ([#AutoAltHome]=0?1:0)][!WriteKeyValue Variables AutoAltHome [#AutoAltHome] "#@#GlobalVar\UserSettings.inc"][!UpdateMeter #CURRENTSECTION#Icon][!Redraw]
Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)+(#DropdownItemHeight#*1))

[Developer2Icon]
Meter=Image
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
ImageAlpha=([#AutoAltHome]<>1?([#DropdownItemOpacity]/3):[#DropdownItemOpacity])
ImageFlip=[#IconFlip0[#AutoAltHome]]
MeterStyle=IconStyle | DevToolsStyle#ShowDevTools#
Y=[Developer2:Y]

[RunCommand.Attrib]
Measure=Plugin
Plugin=RunCommand
; Parameter=attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
; Parameter=attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
; Parameter=attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
Parameter=attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[Developer3]
Meter=String
MeterStyle=InfoStyle | DevToolsStyle#ShowDevTools#
Text=Correct install errors
LeftMouseDownAction=#CloseSettingsMenu#[!DeactivateConfigGroup Folders][!CommandMeasure PSRM.ReplaceInFile "Run"][!CommandMeasure RunCommand.Attrib "Run"]["Wscript.exe" "#SKINSPATH#Droptop\@Resources\Scripts\IconsColor1.vbs" "#SKINSPATH#"]
Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)+(#DropdownItemHeight#*2))

[Developer3Icon]
Meter=Image
ImageName=#@#Icons\Fixed\#IconSize#\fix.png
ImageAlpha=#DropdownItemOpacity#
ImageFlip=None
MeterStyle=IconStyle | DevToolsStyle#ShowDevTools#
Y=[Developer3:Y]

[Developer4]
Meter=String
MeterStyle=InfoStyle | DevToolsStyle#ShowDevTools#
Text=Compile Droptop RMSKINs
LeftMouseDownAction=[!SetOption #CURRENTSECTION# Text "Double-click to compile..."][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDoubleClickAction=#CloseSettingsMenu#[!CommandMeasure PSRM.TranslationEncoding "Run"][!SetClip "# :Four:  **#SkinVersion#.[SkinVersionMini]** (Beta) Change log:#CRLF##CRLF### :New: New features#CRLF#- No new features#CRLF### :Caution: Modifications#CRLF#- No modifications#CRLF### :Mosquito: Bug fixes#CRLF#- No bug fixes#CRLF##CRLF## :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:  :arrow_down:#CRLF##  :blobdance: **[Download v#SkinVersion#.[SkinVersionMini] now](https://github.com/Droptop-Four/Beta-Update/releases/download/v#SkinVersion#.[SkinVersionMini]/Droptop_Beta_Update.rmskin)**#CRLF## :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:  :arrow_up:#CRLF##CRLF### :newspaper:  Need an older version? [View archive](https://github.com/Droptop-Four/Beta-Update/tags).#CRLF##CRLF#### Please let us know of any issues you may encounter by posting them to the [#Preview-Chat](https://discord.com/channels/800124057923485728/1073307684234874900) channel.#CRLF##CRLF### :face_with_spiral_eyes:  *Beta causing trouble?* #CRLF#Your version of Droptop can be downgraded to the **[most-recent stable release](https://github.com/Droptop-Four/Droptop-Four/releases/latest/download/Droptop_Update.rmskin)** release at any time."][!SetVariable MyAppSubstitutions """"(?is)^mspaint$":"Paint","(?is)^SearchUI$":"[#*LastFocusedApp*]","(?is)^msedge$":"Microsoft Edge","(?is)^ShellExperienceHost$":"[#*LastFocusedApp*]","(?is)^LogiOverlay$":"[#*LastFocusedApp*]","(?is)^Un$$":"[#*LastFocusedApp*]","(?is)^StartMenuExperienceHost$":"[#*LastFocusedApp*]","(?is)^msteams$":"[#*LastFocusedApp*]","(?is)^PMA$":"[#*LastFocusedApp*]","(?is)^LockApp$":"[#*LastFocusedApp*]","(?is)^MusNotificationUx$":"[#*LastFocusedApp*]","(?is)^ListWindows$":"[#*LastFocusedApp*]","(?is)^ScreenClippingHost$":"[#*LastFocusedApp*]","(?is)^steamwebhelper$":"Steam","(?is)^AutoHotkey$":"[#*LastFocusedApp*]","(?is)^SearchApp$":"[#*LastFocusedApp*]","(?is)^SearchUI$":"[#*LastFocusedApp*]","(?is)^SearchHost$":"[#*LastFocusedApp*]","(?is)^GoogleDriveSync$":"[#*LastFocusedApp*]","(?is)^Nexus$":"[#*LastFocusedApp*]","(?is)^PowerLauncher$":"[#*LastFocusedApp*]","(?is)^WINWORD$":"Word","(?is)^EXCEL$":"Excel","(?is)^POWERPNT$":"PowerPoint","(?is)^OUTLOOK$":"Outlook","(?is)^olk$":"Outlook","(?is)^ONENOTE$":"OneNote","(?is)^MSACCESS$":"Access","(?is)^Widgets$":"[#*LastFocusedApp*]","(?is)^Notepad$":"Notepad","(?is)^soffice$":"OpenOffice","(?is)^iTunes$":"[\x200B]iTunes","(?is)^Gimp.*$":"GIMP","(?is)^devenv$":"Visual Studio","(?is)^WindowsTerminal$":"Terminal","(?is)^Ui32$":"Wallpaper Engine","(?is)^Synology Surveillance Station Client$":"Surveillance Station","(?is)^PowerToys\.Settings$":"PowerToys","(?is)^PowerToys\.ColorPickerUI$":"PowerToys Color Picker","(?is)^PowerToys\.FancyZonesEditor$":"PowerToys FancyZones","(?is)^PowerToys\.Peek\.UI$":"PowerToys Peek","(?is)^PowerToys\.PowerRename$":"PowerToys PowerRename","(?is)^PowerToys\.ImageResizer$":"PowerToys ImageResizer","(?is)^PowerToys\.KeyboardManagerEditor$":"PowerToys Keyboard Manager","(?is)^PowerToys\.PowerLauncher$":"PowerToys PowerLauncher","(?is)^PowerToys\.RegistryPreview$":"PowerToys RegistryPreview","(?is)^PowerToys\.MeasureToolUI$":"PowerToys MeasureTool","(?is)^PowerToys\.ShortcutGuide$":"PowerToys ShortcutGuide","(?is)^PowerToys\.PowerOCR$":"PowerToys Text Extractor""""][!WriteKeyValue Variables LanguageSubstitutionA "#LanguageSubstitutionA#" "#SKINSPATH#Droptop\Other\Startup\Language.inc"][!WriteKeyValue Variables LanguageSubstitutionB "#LanguageSubstitutionB#" "#SKINSPATH#Droptop\Other\Startup\Language.inc"][!WriteKeyValue Variables CombinedAppSubstitutions """"#DefaultAppSubstitutions#",[#MyAppSubstitutions],"^(.{18})(.{19,})":"\1"""" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables MyAppSubstitutions """[#MyAppSubstitutions]""" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables FolderLoc5 "[\x0025]USERPROFILE[\x0025]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables DownloadsLoc "[\x0025]USERPROFILE[\x0025]\Downloads" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables USER "[\x0025]USERNAME[\x0025]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables UserTimeFormat "[\x0025]a, [\x0025]#d [\x0025]b [\x0025]Y [\x0025]H:[\x0025]M" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SkinVersionMini "[SkinVersionMini]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SkinNewVersion "#SkinVersion#" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables SupporterVersion "#SkinVersion#" "#SKINSPATH#Droptop\Other\Startup\SupporterInstalled.inc"][!WriteKeyValue Variables SkinVersion "#SkinVersion#" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables SkinVersionMini "[SkinVersionMini]" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables SkinVersionTime "[SkinVersionTime]" "#SKINSPATH#Droptop\Other\Startup\UpdateInstalled.inc"][!WriteKeyValue Variables PreviousSkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Basic-Version\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Supporter-Version\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Update\RMSKIN.ini"][!WriteKeyValue rmskin Version "#SkinVersion#.[SkinVersionMini]" "#SKINSPATH#Redistributables\Beta-Update\RMSKIN.ini"]["#@#Scripts\Other\CompileDroptop.bat" #SkinVersion#.#SkinVersionMini# #SkinVersion#.[SkinVersionMini] [&SkinVersionTime] "#PROGRAMPATH#Rainmeter.exe" "#SKINSPATH#]
Y=([Background2:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)+(#DropdownItemHeight#*3))

[Developer4Icon]
Meter=Image
ImageName=#@#Icons\Fixed\#IconSize#\run.png
ImageAlpha=#DropdownItemOpacity#
ImageFlip=None
MeterStyle=IconStyle | DevToolsStyle#ShowDevTools#
Y=[Developer4:Y]