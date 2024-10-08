[Rainmeter]
OnCloseAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1]

[Variables]

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!DeactivateConfig]

@IncludeControl=#@#GlobalVar\Control.inc
@IncludeSupporter=#@#GlobalVar\Supporter.inc
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc

LastFocusedApp="[#***LastFocusedApp***]"

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[SkinVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Update | Update2 | Wait 2000 | Show | ExportVars | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn
ActionList2=Start3 | Rewind2 | Rewind1 | Wait 1000 | ExitUpdate
Update=[!Hide][!CommandMeasure RunCommand.Update "Run"][!WriteKeyValue Variables PreviousSkinVersionTime "[SkinVersionTime]" "#@#GlobalVar\UserSettings.inc"]
Update2=
Show=[!ShowFade]
ExitUpdate=[!HideFade][!Delay 500]["https://github.com/Droptop-Four/Droptop-Four/raw/main/Droptop_Basic_Version.rmskin"][!Hide][!DeactivateConfig]

[Func]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Scripts\Powershell\Func.ps1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=4
Fetch1=ErrorTitleA|Des
Fetch2=ErrorTextA|Des2
Fetch3=ErrorButtonTextA|ButtonText
Fetch4=ErrorButtonTextB|Button2Text

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
TweenGroup=Tweenable
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 1500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 750
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 750
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 750
Optional0=Easing InOutExpo
Optional1=Easing OutExpo
Optional2=Easing OutExpo
Optional3=Easing OutExpo
UpdateDivider=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container]
Meter=String

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)*#TweenNode1#)
Y=(((#SCREENAREAHEIGHT#/2-#Sec.H#/2)*#TweenNode1#)+(20*#Scale#))
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#*(1-#TweenNode1#)+#Sec.W#*#TweenNode1#),(28+(#Sec.H#-(395*#Scale#)-28)*#TweenNode1#),(7*#Scale#) | StrokeWidth 0 | Stroke Color 34,34,34 | Fill Color 31,31,31
Group=Tweenable
DynamicVariables=1

[Slider:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)-50*#Scale#*(1-#TweenNode2#))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,(#Sec.H#-(355*#Scale#)),(10*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(#TweenNode2#*255)
Group=Tweenable
DynamicVariables=1

[Title2]
Meter=String
Text=droptop four
X=(#Sec.P#+(13*#Scale#))
Y=(#Sec.p#+(20*#Scale#))
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S
Container=Slider:C

[Des]
Meter=String
Text=Basic Version not detected
X=r
Y=(#Sec.P#+(83*#Scale#))
H=(43*#Scale#)
FontSize=(22*#Scale#)
InlineSetting=Shadow | 0 | 1 | 1 | 0,0,0,150
MeterStyle=String:S | Header:S
Container=Slider:C

[Des2]
Meter=String
Text=Download & install the Basic Version before using Droptop.
X=r
Y=R
W=(700*#Scale#)
MeterStyle=String:S | Text:S
Container=Slider:C
InlinePattern=📣╏announcements
InlinePattern2=📣╏announcements
InlineSetting=Color | 56,250,138
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting2 "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting2 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Button]
Meter=Shape
X=(#Sec.P#+(13*#Scale#))
Y=(245*#Scale#)
Shape=Rectangle 0,0,([ButtonText:W]+(40*#Scale#)),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C
DynamicVariables=1

[ButtonText]
Meter=String
X=(20*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=Download now
StringAlign=LeftCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

[Button2]
Meter=Shape
X=(40*#Scale#)R
Y=(245*#Scale#)
Shape=Rectangle 0,0,([Button2Text:W]+(40*#Scale#)),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 125,125,125,125
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 155,155,155,155"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 125,125,125,125"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideFade][!WriteKeyValue Variables FirstLoad 1 "#@#GlobalVar\UserSettings.inc"][!Delay 1000][!ActivateConfig "Droptop\DropdownBar" "DropdownBar.ini"][!DeactivateConfig]
Container=Slider:C
DynamicVariables=1

[Button2Text]
Meter=String
X=(20*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=It's already installed
StringAlign=LeftCenter
FontColor=255,255,255,155
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C
DynamicVariables=1

; --------------------------------- Section 2 -------------------------------- ;

; [Image]
; Meter=Image
; ImageName=#@#Images\Setup\Update.png
; X=0
; W=(#Sec.W#)
; H=(#Sec.H#-450)
; PreserveAspectRatio=1
; ImageAlpha=(255*#TweenNode3#)
; Container=Slider2:C
; Group=Tweenable
; DynamicVariables=1
