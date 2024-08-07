[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Wait 750 | Start1 | Wait 1000 | ClickOn | Start2

[Variables]
Sec.L=(500*#Scale#)
Sec.boxW=(100)
Sec.SaveLocation="#@#GlobalVar\UserSettings.inc"

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

00=0
10=1
20=2
30=3
40=4
50=5
60=6

01=0
11=1
21=2
31=3
41=4
51=5
61=6

Color00=0
Color10=0
Color20=0
Color30=0
Color40=0
Color50=0
Color60=0

Color01=1
Color11=1
Color21=1
Color31=1
Color41=1
Color51=1
Color61=1

TintColor0=56,250,138
TintColor1=255,255,255

HomeColorNum=0

IconsColor0=255,255,255,185
IconsColor1=56,250,138

IconsSymbol0=[\xe906]
IconsSymbol1=[\xe901]

IconsString01=#*FolderName1*#
IconsString02=#*FolderName2*#
IconsString03=#*FolderName3*#
IconsString04=#*FolderName4*#
IconsString05=#*FolderName5*#
IconsString06=#*FolderName6*#
IconsString07=#*FolderName7*#
IconsString08=#*FolderName8*#
IconsString09=#*FolderName9*#
IconsString010=#*FolderName10*#
IconsString011=#*FolderName11*#
IconsString012=#*FolderName12*#

IconsString11=📌
IconsString12=⚔️
IconsString13=🌎
IconsString14=🛠
IconsString15=💻
IconsString16=✔️
IconsString17=🔥
IconsString18=🎧
IconsString19=🍄
IconsString110=💎
IconsString111=💘
IconsString112=🥨

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=9
Fetch1=StartP#Page#Title1|000
Fetch2=StartP#Page#Notes1|Text.1
Fetch3=StartP#Page#Title2|Subtitle.1
Fetch4=StartP#Page#Size1|Size1
Fetch5=StartP#Page#Size2|Size2
Fetch6=StartP#Page#Size3|Size3
Fetch7=StartP#Page#Icons1|Icons1
Fetch8=
Fetch9=SayContinue|ButtonText

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1000
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Tween5=Single | Variable | TweenNode6 | 0 | 1 | 500
Optional1=Easing OutExpo
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo | Group All
Optional4=Easing OutExpo | Group All
Optional5=Easing InOutSine | Group All
TweenGroup=Tweenable
UpdateDivider=1

[Box:S]
FillColor=StrokeWidth (2*#Scale#) | Fill Color 43,43,43 | Stroke Color 55,55,55
X=(#Sec.L#+100*#Scale#)
Group=InputBox
Container=Container
DynamicVariables=1

[mBox:S]
X=(#Sec.P#/2)R
Y=r
Container=Container
Shape=Rectangle 0,0,(#Sec.boxW#),(#Sec.boxW#),(5) | StrokeWidth 0 | Scale #Scale#,#Scale# | Fill Color 43,43,43

[mImage:S]
X=r
Y=r
W=((#Sec.boxW#-20)*#Scale#)
H=((#Sec.boxW#-20)*#Scale#)
Padding=(10*#Scale#),(10*#Scale#),(10*#Scale#),(10*#Scale#)
Container=Container
PreserveAspectRatio=1
ImageName=#@#Images\mPlayerIcons\#CURRENTSECTION#.png

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BackArrow]
Meter=String
MeterStyle=BackArrow:S

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[BackgroundImage]
Meter=String
StringAlign=RightCenter
MeterStyle=Image:BG
Text=[\xe904]

[Title]
Meter=String
Text=droptop four
X=(#SCREENAREAWIDTH#/2)
Y=(#SCREENAREAHEIGHT#/2-#SEc.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
StringAlign=Center
Container=
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S

; --------------------------------- Section 1 -------------------------------- ;

[000]
Meter=String
X=(#Sec.P#)
Y=(107*#Scale#)
Text=Choose a home button
FontSize=(25*#Scale#)
DynamicVariables=1
Group=Tweenable
MeterStyle=String:S | Header:S

[Text.1]
Meter=String
FontSize=(17*#Scale#)
X=r
Y=(80*#Scale#-#Sec.P#/2)r
W=(450*#Scale#)
H=(65*#Scale#)
Text=Upgrade to the supporter version#CRLF#to unlock 300 home button icons
MeterStyle=String:S | Text:S

[HomeIconStyle]
ImageTint=255,255,255,155
X=R
Y=r
W=(78*#Scale#)
H=(52*#Scale#)
ImageName=#@#TopImages\Home\32\Column0S\Home#CURRENTSECTION#.png
LeftMouseDownAction=[!SetVariable HomeColorNum [#Color[#CURRENTSECTION]]][!SetVariable HomeColumn 0][!SetVariable HomeRow [##CURRENTSECTION#]][!WriteKeyValue Variables CustomHomeButton 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeColumn [#HomeColumn] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeRow [#HomeRow] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeColorNum [#HomeColorNum] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeRow [#HomeRow]][!WriteKeyValue Variables HomeColorNum [#HomeColorNum]][!SetOptionGroup HomeIcons ImageTint "255,255,255,155"][!SetOptionGroup HomeIcons ImageName "#@#TopImages\Home\32\Column0S\Home[#*CURRENTSECTION*].png"][!SetOption #CURRENTSECTION# ImageTint "56,250,138"][!SetOption #CURRENTSECTION# ImageName "#@#TopImages\Home\32\Column0S\Home[##CURRENTSECTION#]0.png"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" HomeIcons][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint "255,255,255,155"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=Content | Section3 | HomeIcons
Container=Container

[00]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(90*#Scale#-#Sec.P#/2)r

[10]
Meter=Image
MeterStyle=HomeIconStyle

[20]
Meter=Image
MeterStyle=HomeIconStyle

[30]
Meter=Image
MeterStyle=HomeIconStyle

[40]
Meter=Image
MeterStyle=HomeIconStyle

[50]
Meter=Image
MeterStyle=HomeIconStyle

[60]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[01]
Meter=Image
MeterStyle=HomeIconStyle

[11]
Meter=Image
MeterStyle=HomeIconStyle

[21]
Meter=Image
MeterStyle=HomeIconStyle

[31]
Meter=Image
MeterStyle=HomeIconStyle

[41]
Meter=Image
MeterStyle=HomeIconStyle

[51]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[61]
Meter=Image
MeterStyle=HomeIconStyle
ImageName=#@#TopImages\Home\32\Column0S\Home#CURRENTSECTION#.png

[MoreIcons]
Meter=Image
ImageName=#@#Images\Setup\HomeIcons.png
ImageTint=255,255,255,45
; SolidColor=255,55,55
X=(#Sec.P#-(4*#Scale#))
Y=(10*#Scale#)r
W=(428*#Scale#)
PreserveAspectRatio=1
Group=Content | Section3
Container=Container

; --------------------------------- Section 2 -------------------------------- ;

[Subtitle.1]
Meter=String
X=(#Sec.L#+100*#Scale#)
Y=(120*#Scale#)
W=(330*#Scale#)
Text=Choose a size for the dropdown bar
ClipString=2
DynamicVariables=1
MeterStyle=String:S | Header2:S

[Size.StringStyle]
X=(#Sec.L#+100*#Scale#)
Y=55r
W=425
FontColor=255,255,255,185
FontFace=Urbanist
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=Container
Group=SizeOptions

[Size1]
Meter=String
MeterStyle=String:S | Header2:S | Size.StringStyle
X=r
Y=(13*#Scale#)R
H=66
FontSize=20
Text=Small
LeftMouseDownAction=[!WriteKeyValue Variables DroptopSizeNum 3 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Small "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 16 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 16 "#@#GlobalVar\UserSettings.inc"][!SetOptionGroup SizeOptions FontColor "255,255,255,185"][!SetOption #CURRENTSECTION# FontColor "56,250,138"][!SetOptionGroup SizeOptions ImageTint "255,255,255"][!SetOptionGroup Size1 ImageTint "56,250,138"][!SetOptionGroup BarIcon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*##*HomeColorNum*#.png"][!SetOption Size1.Icon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*#0.png"][!SetOptionGroup SizeOptions Stroke "Stroke Color 255,255,255,15 | StrokeWidth 2"][!SetOption #CURRENTSECTION#Shape Stroke "Stroke Color 56,250,138 | StrokeWidth 2"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" SizeOptions][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeterGroup SizeOptions][!Redraw]

[Size1.Image]
Meter=Image
ImageName=#@#Images\Setup\Bar1[#IconsSymbolNum].png
X=r
Y=38r
PreserveAspectRatio=1
Group=SizeOptions | Size1
Container=Container
DynamicVariables=1

[Size1.Icon]
Meter=Image
ImageName=#@#TopImages\Home\32\Column0S\Home#HomeRow##HomeColorNum#.png
X=8r
Y=1r
H=26
DynamicVariables=1
Container=Container
Group=SizeOptions | Size1 | Icon1 | BarIcon

;---------------------

[Size2]
Meter=String
MeterStyle=String:S | Header2:S | Size.StringStyle
FontSize=28
H=94
Text=Medium
LeftMouseDownAction=[!WriteKeyValue Variables DroptopSizeNum 5 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 32 "#@#GlobalVar\UserSettings.inc"][!SetOptionGroup SizeOptions FontColor "255,255,255,185"][!SetOption #CURRENTSECTION# FontColor "56,250,138"][!SetOptionGroup SizeOptions ImageTint "255,255,255"][!SetOptionGroup Size2 ImageTint "56,250,138"][!SetOptionGroup BarIcon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*##*HomeColorNum*#.png"][!SetOption Size2.Icon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*#0.png"][!SetOptionGroup SizeOptions Stroke "Stroke Color 255,255,255,15 | StrokeWidth 2"][!SetOption #CURRENTSECTION#Shape Stroke "Stroke Color 56,250,138 | StrokeWidth 2"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" SizeOptions][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeterGroup SizeOptions][!Redraw]

[Size2.Image]
Meter=Image
ImageName=#@#Images\Setup\Bar2[#IconsSymbolNum].png
X=r
Y=50r
Group=SizeOptions | Size2
Container=Container
DynamicVariables=1

[Size2.Icon]
Meter=Image
ImageName=#@#TopImages\Home\32\Column0S\Home#HomeRow##HomeColorNum#.png
X=11r
Y=0r
H=36
DynamicVariables=1
Container=Container
Group=SizeOptions | Size2 | Icon2 | BarIcon

;---------------------

[Size3]
Meter=String
MeterStyle=String:S | Header2:S | Size.StringStyle
FontSize=40
Text=Large
LeftMouseDownAction=[!WriteKeyValue Variables DroptopSizeNum 8 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 32 "#@#GlobalVar\UserSettings.inc"][!SetOptionGroup SizeOptions FontColor "255,255,255,185"][!SetOption #CURRENTSECTION# FontColor "56,250,138"][!SetOptionGroup SizeOptions ImageTint "255,255,255"][!SetOptionGroup Size3 ImageTint "56,250,138"][!SetOptionGroup BarIcon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*##*HomeColorNum*#.png"][!SetOption Size3.Icon ImageName "#@#TopImages\Home\32\Column0S\Home#*HomeRow*#0.png"][!SetOptionGroup SizeOptions Stroke "Stroke Color 255,255,255,15 | StrokeWidth 2"][!SetOption #CURRENTSECTION#Shape Stroke "Stroke Color 56,250,138 | StrokeWidth 2"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" SizeOptions][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeterGroup SizeOptions][!Redraw]
H=121

[Size3.Image]
Meter=Image
ImageName=#@#Images\Setup\Bar3[#IconsSymbolNum].png
X=r
Y=65r
Group=SizeOptions | Size3
Container=Container
DynamicVariables=1

[Size3.Icon]
Meter=Image
ImageName=#@#TopImages\Home\32\Column0S\Home#HomeRow##HomeColorNum#.png
X=16r
Y=2r
H=52
DynamicVariables=1
Container=Container
Group=SizeOptions | Size3 | Icon3 | BarIcon

[SizeLimitShape]
Meter=Shape
Shape=Rectangle (+#Sec.W#-(120*#Scale#)),0,(128*#Scale#),(28+(#Sec.H#-28)) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=0 | 31,31,31,255 ; 0.4 | 31,31,31,0 ; 1.0
Container=Container

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=(#Sec.W#-(180*#Scale#+#Sec.P#)*#TweenNode3#)
Y=(#SEc.H#-#Sec.P#-40*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96,(255*#TweenNode3#)
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#ExecuteAnimation[#NoAnimationNum]]
Group=Button | Tweenable
DynamicVariables=1
Container=Container

[ButtonText]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
Text=Continue
FontColor=255,255,255,(255*#TweenNode3#)
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
Group=Button | Tweenable
DynamicVariables=1
MeterStyle=String:S