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
ExitUpdate=[!HideFade][!WriteKeyValue Variables AltHome #AutoAltHome# "#@#GlobalVar\UserSettings.inc"][!Delay 500][!Hide][!DeactivateConfig]

[Func]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Scripts\Powershell\Func.ps1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=3
Fetch1=UpgradeTitleA|Des
Fetch2=UpgradeTextA|Des2
Fetch3=UpgradeButtonText|ButtonText

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
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#*(1-#TweenNode1#)+#Sec.W#*#TweenNode1#),(28+(#Sec.H#-(355*#Scale#)-28)*#TweenNode1#),(7*#Scale#) | StrokeWidth 0 | Stroke Color 34,34,34 | Fill Color 31,31,31
Group=Tweenable
DynamicVariables=1

[Image]
Meter=Image
ImageName=#@#Images\Setup\Support.png
ImageAlpha=85
X=(-#Sec.W#*(1-#TweenNode3#))
W=(#Sec.W#)
H=(#Sec.H#)
PreserveAspectRatio=2
ImageAlpha=(255*#TweenNode3#)
Container=Slider:C
Group=Tweenable
DynamicVariables=1

[Slider:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)-50*#Scale#*(1-#TweenNode2#))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2)+(20*#Scale#))
Shape=Rectangle 0,0,#Sec.W#,(#Sec.H#-(355*#Scale#)),(10*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(#TweenNode2#*255)
Group=Tweenable
DynamicVariables=1

[Title2]
Meter=String
Text=droptop four
X=(#Sec.P#+(13*#Scale#))
Y=#Sec.p#
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
InlineSetting2=Shadow | 0 | 2 | 1 | 0,0,0,255
FontColor=#Lime#
MeterStyle=String:S
Container=Slider:C

[Des]
Meter=String
Text=Hey there! Enjoying Droptop?
X=r
Y=(#Sec.P#+(83*#Scale#))
H=(43*#Scale#)
FontSize=(22*#Scale#)
InlineSetting=Shadow | 0 | 2 | 1 | 0,0,0,255
MeterStyle=String:S | Header:S
Container=Slider:C

[Des2]
Meter=String
Text=Get Droptop: Supporter Version for just $3 USD using discount code: #DISCOUNTCODE#. Offer only valid for a limited time.
X=r
Y=R
W=(700*#Scale#)
MeterStyle=String:S | Text:S
Container=Slider:C
InlinePattern=#DISCOUNTCODE#
InlineSetting=Color | 56,250,138
InlineSetting2=Shadow | 0 | 2 | 1 | 0,0,0,255
InlinePattern3="\$3 USD"
InlineSetting3=Size | (20*#Scale#)

[Button]
Meter=Shape
X=(#Sec.P#+(13*#Scale#))
Y=(245*#Scale#)
Shape=Rectangle 0,0,(300*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["https://cariboudjan.gumroad.com/l/droptop/#DISCOUNTCODE#"][!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C

[ButtonText]
Meter=String
X=(150*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=Get it for $3  (50% off!)
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

[ButtonX]
Meter=Shape
Shape=Rectangle 0,0,(30*#Scale#),(30*#Scale#),6 | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 255,255,255,45
X=(962*#Scale#)
Y=(7*#Scale#)
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #Lime#][!SetOption #CURRENTSECTION#Text FontColor "13,13,13"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,45"][!SetOption #CURRENTSECTION#Text FontColor "255,255,255,155"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
DynamicVariables=1
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C
Group=ButtonX

[ButtonXText]
Meter=String
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
FontColor=255,255,255,155
StringAlign=CenterCenter
FontSize=(12*#Scale#)
FontFace=Urbanist
Text="❌"
X=(15*#Scale#)r
Y=(15*#Scale#)r
W=(30*#Scale#)
H=(30*#Scale#)
AntiAlias=1
DynamicVariables=1
Container=Slider:C
Group=ButtonX

; --------------------------------- Section 2 -------------------------------- ;
