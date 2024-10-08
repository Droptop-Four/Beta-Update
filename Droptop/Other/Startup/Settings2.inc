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

IconsColor0=255,255,255,185
IconsColor1=56,250,138

IconsSymbol0=[\xe906]
IconsSymbol1=[\xe901]

; IconsString01=#*FolderName1*#
; IconsString02=#*FolderName2*#
; IconsString03=#*FolderName3*#
; IconsString04=#*FolderName4*#
; IconsString05=#*FolderName5*#
; IconsString06=#*FolderName6*#
; IconsString07=#*FolderName7*#
; IconsString08=#*FolderName8*#
; IconsString09=#*FolderName9*#
; IconsString010=#*FolderName10*#
; IconsString011=#*FolderName11*#
; IconsString012=#*FolderName12*#

; IconsString11=📌
; IconsString12=⚔️
; IconsString13=🌎
; IconsString14=🤖
; IconsString15=💻
; IconsString16=☑
; IconsString17=🔥
; IconsString18=🎧
; IconsString19=🍄
; IconsString110=💎
; IconsString111=💘
; IconsString112=🥨

01.Category=Logos
01.Index=1

02.Category=Logos
02.Index=2

03.Category=Logos
03.Index=3

04.Category=Logos
04.Index=4

05.Category=Logos
05.Index=5

06.Category=Logos
06.Index=6

07.Category=Logos
07.Index=7

08.Category=Logos
08.Index=8

09.Category=Logos
09.Index=9

010.Category=Logos
010.Index=10

011.Category=Creatures
011.Index=1

012.Category=Creatures
012.Index=2

013.Category=Creatures
013.Index=3

014.Category=Creatures
014.Index=4

015.Category=Creatures
015.Index=5

016.Category=Creatures
016.Index=6

017.Category=Creatures
017.Index=7

018.Category=Creatures
018.Index=8

019.Category=Creatures
019.Index=9

020.Category=Creatures
020.Index=10

021.Category=Food
021.Index=1

022.Category=Food
022.Index=2

023.Category=Food
023.Index=3

024.Category=Food
024.Index=4

025.Category=Food
025.Index=5

026.Category=Food
026.Index=6

027.Category=Food
027.Index=7

028.Category=Food
028.Index=8

029.Category=Food
029.Index=9

030.Category=Food
030.Index=10

031.Category=Seasonal
031.Index=1

032.Category=Seasonal
032.Index=2

033.Category=Seasonal
033.Index=3

034.Category=Seasonal
034.Index=4

035.Category=Seasonal
035.Index=5

036.Category=Seasonal
036.Index=6

037.Category=Seasonal
037.Index=7

038.Category=Seasonal
038.Index=8

039.Category=Seasonal
039.Index=9

040.Category=Seasonal
040.Index=10

041.Category=Objects
041.Index=1

042.Category=Objects
042.Index=2

043.Category=Objects
043.Index=3

044.Category=Objects
044.Index=4

045.Category=Objects
045.Index=5

046.Category=Objects
046.Index=6

047.Category=Objects
047.Index=7

048.Category=Objects
048.Index=8

049.Category=Objects
049.Index=9

050.Category=Objects
050.Index=10

051.Category=Symbols
051.Index=1

052.Category=Symbols
052.Index=2

053.Category=Symbols
053.Index=3

054.Category=Symbols
054.Index=4

055.Category=Symbols
055.Index=5

056.Category=Symbols
056.Index=6

057.Category=Symbols
057.Index=7

058.Category=Symbols
058.Index=8

059.Category=Symbols
059.Index=9

060.Category=Symbols
060.Index=10

MonoSymbol0=[\xe902]
MonoSymbol1=[\xe905]

MonoColor0=MonoS
MonoColor1=ColorS

MonoTint0=56,250,138
MonoTint1=255,255,255,185

HomeIconCat.Logos=1
HomeIconCat.Creatures=2
HomeIconCat.Food=3
HomeIconCat.Seasonal=4
HomeIconCat.Objects=5
HomeIconCat.Symbols=6

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=4
Fetch1=StartP#Page#Title1|000
Fetch2=StartP#Page#Notes1|Text.1
Fetch3=SetHome2|MonochromeIcon
Fetch4=SayContinue|ButtonText

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
Y=(97*#Scale#)
Text=Choose a home button
FontSize=(25*#Scale#)
DynamicVariables=1
Group=Tweenable
MeterStyle=String:S | Header:S

[Text.1]
Meter=String
FontSize=(17*#Scale#)
X=r
Y=(70*#Scale#-#Sec.P#/2)r
; SolidColor=255,55,55
W=(850*#Scale#)
H=(35*#Scale#)
Text=Upgrade to the supporter version to unlock the option to use your own icon
MeterStyle=String:S | Text:S

[HomeIconStyle]
ImageTint=255,255,255,155
X=R
Y=r
W=(78*#Scale#)
H=(52*#Scale#)
ImageName=#@#TopImages\Home\64\[#[#CURRENTSECTION].Category]\[#MonoColor[#HomeColorNum]]\[#[#CURRENTSECTION].Index].png
LeftMouseDownAction=[!WriteKeyValue Variables CustomHomeButton 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconCatNum [#HomeIconCat.[#[#CURRENTSECTION].Category]] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconCatNum [#HomeIconCat.[#[#CURRENTSECTION].Category]]][!WriteKeyValue Variables HomeIconIndex [#[#CURRENTSECTION].Index] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HomeIconIndex [#[#CURRENTSECTION].Index]][!SetOptionGroup HomeIcons ImageTint "255,255,255,155"][!SetOptionGroup HomeIcons ImageName "#@#TopImages\Home\64\[#[#*CURRENTSECTION*].Category]\[#MonoColor[#*HomeColorNum*]]\[#[#*CURRENTSECTION*].Index].png"][!SetOption #CURRENTSECTION# ImageName "#@#TopImages\Home\64\[#[#CURRENTSECTION].Category]\MonoS\[#[#CURRENTSECTION].Index].png"][!SetOption #CURRENTSECTION# ImageTint "56,250,138"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" HomeIcons][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint "255,255,255,155"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=Content | Section3 | HomeIcons
; DynamicVariables=1
Container=Container

[01]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(60*#Scale#-#Sec.P#/2)r

[02]
Meter=Image
MeterStyle=HomeIconStyle

[03]
Meter=Image
MeterStyle=HomeIconStyle

[04]
Meter=Image
MeterStyle=HomeIconStyle

[05]
Meter=Image
MeterStyle=HomeIconStyle

[06]
Meter=Image
MeterStyle=HomeIconStyle

[07]
Meter=Image
MeterStyle=HomeIconStyle | HomeCategory2

[08]
Meter=Image
MeterStyle=HomeIconStyle

[09]
Meter=Image
MeterStyle=HomeIconStyle

[010]
Meter=Image
MeterStyle=HomeIconStyle

[011]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[012]
Meter=Image
MeterStyle=HomeIconStyle

[013]
Meter=Image
MeterStyle=HomeIconStyle

[014]
Meter=Image
MeterStyle=HomeIconStyle

[015]
Meter=Image
MeterStyle=HomeIconStyle

[016]
Meter=Image
MeterStyle=HomeIconStyle

[017]
Meter=Image
MeterStyle=HomeIconStyle

[018]
Meter=Image
MeterStyle=HomeIconStyle

[019]
Meter=Image
MeterStyle=HomeIconStyle

[020]
Meter=Image
MeterStyle=HomeIconStyle

[021]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[022]
Meter=Image
MeterStyle=HomeIconStyle

[023]
Meter=Image
MeterStyle=HomeIconStyle

[024]
Meter=Image
MeterStyle=HomeIconStyle

[025]
Meter=Image
MeterStyle=HomeIconStyle

[026]
Meter=Image
MeterStyle=HomeIconStyle

[027]
Meter=Image
MeterStyle=HomeIconStyle

[028]
Meter=Image
MeterStyle=HomeIconStyle

[029]
Meter=Image
MeterStyle=HomeIconStyle

[030]
Meter=Image
MeterStyle=HomeIconStyle

[031]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[032]
Meter=Image
MeterStyle=HomeIconStyle

[033]
Meter=Image
MeterStyle=HomeIconStyle

[034]
Meter=Image
MeterStyle=HomeIconStyle

[035]
Meter=Image
MeterStyle=HomeIconStyle

[036]
Meter=Image
MeterStyle=HomeIconStyle

[037]
Meter=Image
MeterStyle=HomeIconStyle

[038]
Meter=Image
MeterStyle=HomeIconStyle

[039]
Meter=Image
MeterStyle=HomeIconStyle

[040]
Meter=Image
MeterStyle=HomeIconStyle

[041]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[042]
Meter=Image
MeterStyle=HomeIconStyle

[043]
Meter=Image
MeterStyle=HomeIconStyle

[044]
Meter=Image
MeterStyle=HomeIconStyle

[045]
Meter=Image
MeterStyle=HomeIconStyle

[046]
Meter=Image
MeterStyle=HomeIconStyle

[047]
Meter=Image
MeterStyle=HomeIconStyle

[048]
Meter=Image
MeterStyle=HomeIconStyle

[049]
Meter=Image
MeterStyle=HomeIconStyle

[050]
Meter=Image
MeterStyle=HomeIconStyle

[051]
Meter=Image
MeterStyle=HomeIconStyle
X=(#Sec.P#-(20*#Scale#))
Y=(20*#Scale#)R

[052]
Meter=Image
MeterStyle=HomeIconStyle

[053]
Meter=Image
MeterStyle=HomeIconStyle

[054]
Meter=Image
MeterStyle=HomeIconStyle

[055]
Meter=Image
MeterStyle=HomeIconStyle

[056]
Meter=Image
MeterStyle=HomeIconStyle

[057]
Meter=Image
MeterStyle=HomeIconStyle

[058]
Meter=Image
MeterStyle=HomeIconStyle

[059]
Meter=Image
MeterStyle=HomeIconStyle

[060]
Meter=Image
MeterStyle=HomeIconStyle

[MonochromeIcon]
Meter=String
MeterStyle=String:S | Text:S
FontWeight=600
FontColor=255,255,255,185
FontSize=(15*#Scale#)
X=#Sec.P#
Y=(20*#Scale#)R
Text=Monochrome icon
Prefix="[#MonoSymbol[#HomeColorNum]]  "
InlinePattern=[#MonoSymbol[#HomeColorNum]]
InlineSetting=Face | icomoon
InlinePattern2=[#MonoSymbol[#HomeColorNum]]
InlineSetting2=Size | (13*#Scale#)
InlinePattern3=[#MonoSymbol[#HomeColorNum]]
InlineSetting3=Color | [#MonoTint[#HomeColorNum]]
LeftMouseDownAction=[!SetVariable HomeColorNum (#HomeColorNum#=1?0:1)][!WriteKeyValue Variables HomeColorNum [#HomeColorNum]][!WriteKeyValue Variables HomeColorNum [#HomeColorNum] "#@#GlobalVar\UserSettings.inc"][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

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