[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Variables]
ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Wait 1500 | Start1 | ClickOn | Wait 500 | Start2
ActionList2=RewindAll | Wait 1000 | NextPage

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
TweenGroup=Tweenable
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 1500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 750
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 750
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 750
Optional0=Easing InOutExpo | Group All
Optional1=Easing OutExpo | Group All
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo
UpdateDivider=1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=11
Fetch1=StartP7Title1|000
Fetch2=StartP7Credit1|Contri.1
Fetch3=StartP7Credit2|Contri.2
Fetch4=StartP7Credit3|Contri.3
Fetch5=StartP7Credit4|Contri.4
Fetch6=StartP7Notes1|Features.1
Fetch7=StartP7Notes2|Features.2
Fetch8=StartP7Notes3|Features.3
Fetch9=StartP7Notes4|Features.4
Fetch10=StartP7Button1|ButtonText
Fetch11=StartP7Button2|ButtonText2

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BackArrow]
Meter=String
MeterStyle=BackArrow:S

[Shape]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-#Sec.W#/2)
Y=(#SCREENAREAHEIGHT#/2-#Sec.H#/2)
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[Slider2:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,(#Sec.H#*2),(10*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=180 | 255,255,255,0 ; 0.0 | 255,255,255,(35*#TweenNode3#) ; 1.0
Group=Tweenable
DynamicVariables=1

[Image]
Meter=Image
ImageName=#@#Images\Setup\Support.png
X=(-#Sec.W#*(1-#TweenNode3#))
W=(#Sec.W#)
H=(#Sec.H#)
PreserveAspectRatio=2
Container=Slider2:C
Group=Tweenable
DynamicVariables=1

[Title]
Meter=String
Text=droptop four
X=(#SCREENAREAWIDTH#/2)
Y=(#SCREENAREAHEIGHT#/2-#Sec.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
StringAlign=Center
Container=
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S

; --------------------------------- Section 1 -------------------------------- ;

[000]
Meter=String
X=(#Sec.W#/2)
Y=(80*#Scale#)
Text=Support this project by upgrading#CRLF#to the supporter version
StringAlign=Center
MeterStyle=String:S | Header:S
Container=Container

[Icon.1]
Meter=Image
X=(#Sec.P#*#TweenNode1#)
Y=(90*#Scale#)R
W=(48*#Scale#)
H=(48*#Scale#)
ImageName=#@#Images\Setup\LogoAvatar.png
Container=Container
Group=Tweenable
DynamicVariables=1

[Contri.1]
Meter=String
Prefix=Cariboudjan#CRLF#
Text=Director & creator
X=(10*#Scale#)R
Y=(0.5*48*#Scale#)r
StringAlign=LeftCenter
MeterStyle=String:S | Text:S
Container=Container
Inlinepattern=.*#CRLF#
InlineSetting=Weight | 800
Inlinepattern2=.*#CRLF#
InlineSetting2=Size | (15*#scale#)

[DA.1]
Meter=Image
ImageName=#@#Images\Setup\DA.png
X=(180*#Scale#)r
Y=(-32*#Scale#/2)r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://www.deviantart.com/cariboudjan"]
Container=Container

[Discord.1]
Meter=Image
ImageName=#@#Images\Setup\Discord.png
X=R
Y=r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://discord.gg/MpTwDSQJTb"]
Container=Container

[Icon.2]
Meter=Image
X=(#Sec.P#*#TweenNode1#)
Y=(50*#Scale#)r
W=(48*#Scale#)
H=(48*#Scale#)
ImageName=#@#Images\Setup\LogoAvatar-Bunz.png
Container=Container
Group=Tweenable
DynamicVariables=1

[Contri.2]
Meter=String
Prefix=Bunz#CRLF#
Text=Brand manager
X=(10*#Scale#)R
Y=(0.5*48*#Scale#)r
StringAlign=LeftCenter
MeterStyle=String:S | Text:S
Container=Container
Inlinepattern=.*#CRLF#
InlineSetting=Weight | 800
Inlinepattern2=.*#CRLF#
InlineSetting2=Size | (15*#scale#)

[DA.2]
Meter=Image
ImageName=#@#Images\Setup\DA.png
X=(180*#Scale#)r
Y=(-32*#Scale#/2)r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://www.deviantart.com/bunz66"]
Container=Container

[Discord.2]
Meter=Image
ImageName=#@#Images\Setup\Github.png
X=R
Y=r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://github.com/66Bunz"]
Container=Container

[Icon.3]
Meter=Image
X=(#Sec.P#*#TweenNode1#)
Y=(50*#Scale#)r
W=(48*#Scale#)
H=(48*#Scale#)
ImageName=#@#Images\Setup\LogoAvatar-Kaz.png
Group=Tweenable
Container=Container
DynamicVariables=1

[Contri.3]
Meter=String
Prefix=KazukiGames82#CRLF#
Text=Apps & modding
X=(10*#Scale#)R
Y=(0.5*48*#Scale#)r
StringAlign=LeftCenter
MeterStyle=String:S | Text:S
Container=Container
Inlinepattern=.*#CRLF#
InlineSetting=Weight | 800
Inlinepattern2=.*#CRLF#
InlineSetting2=Size | (15*#scale#)

[DA.3]
Meter=Image
ImageName=#@#Images\Setup\DA.png
X=(180*#Scale#)r
Y=(-32*#Scale#/2)r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=0
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseUpAction=[]
Container=Container

[Discord.3]
Meter=Image
ImageName=#@#Images\Setup\Github.png
X=R
Y=r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://github.com/KazukiGames82"]
Container=Container

[Icon.4]
Meter=Image
X=(#Sec.P#*#TweenNode1#)
Y=(50*#Scale#)r
W=(48*#Scale#)
H=(48*#Scale#)
ImageName=#@#Images\Setup\LogoAvatar-Death.png
Group=Tweenable
Container=Container
DynamicVariables=1

[Contri.4]
Meter=String
Prefix=deathcrafter#CRLF#
Text=Plugins
X=(10*#Scale#)R
Y=(0.5*48*#Scale#)r
StringAlign=LeftCenter
MeterStyle=String:S | Text:S
Container=Container
Inlinepattern=.*#CRLF#
InlineSetting=Weight | 800
Inlinepattern2=.*#CRLF#
InlineSetting2=Size | (15*#scale#)

[DA.4]
Meter=Image
ImageName=#@#Images\Setup\DA.png
X=(180*#Scale#)r
Y=(-32*#Scale#/2)r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://www.deviantart.com/deathcrafter18"]
Container=Container

[Discord.4]
Meter=Image
ImageName=#@#Images\Setup\Github.png
X=R
Y=r
W=(32*#Scale#)
H=(32*#Scale#)
ImageAlpha=160
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 245][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 160][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=["https://github.com/deathcrafter"]
Container=Container

; --------------------------------- Section 2 -------------------------------- ;

[Features.1]
Meter=String
FontWeight=600
FontSize=(20*#scale#)
X=(370*#Scale#)+(#Sec.P#*#TweenNode1#)
Y=(274*#Scale#)
Text=Pay what you want
StringAlign=Left
MeterStyle=String:S | Text:S
Container=Container
Group=Tweenable
DynamicVariables=1

[Features.2]
Meter=String
; InlinePattern=[0-9]
; InlineSetting=Size | (19*#Scale#)
InlinePattern=➜
InlineSetting=Color | 39,174,96
FontSize=(17*#Scale#)
Text=➜ 6 additional folders#CRLF#➜ 18 additional themes#CRLF#➜ Upload your own home icon#CRLF#➜ Updates when available
X=(370*#Scale#)+(#Sec.P#*#TweenNode1#)
Y=(10*#Scale#)R
StringAlign=Left
MeterStyle=String:S | Text:S
Container=Container
Group=Tweenable
DynamicVariables=1

[Features.3]
Meter=String
FontSize=(20*#scale#)
InlinePattern=.#DroptopSalePrice#.*
InlineSetting=Size | (28*#Scale#)
InlinePattern2=.#DroptopSalePrice#.*
InlineSetting2=Color | 56,250,138
InlinePattern3=.#DroptopSalePrice#.*
InlineSetting3=Weight | 800
Text=Get it for only: $X USD
X=(370*#Scale#)+(#Sec.P#*#TweenNode1#)
Y=(10*#Scale#)R
StringAlign=Left
MeterStyle=String:S | Text:S
Container=Container
Group=Tweenable
DynamicVariables=1

[Features.4]
Meter=String
FontSize=(12*#scale#)
FontColor=255,255,255,225
InlinePattern=🖤
InlineSetting=GradientColor | 180 | 254,203,138,245 ; 0.0 | 255,130,117,245 ; 1.0
Text=Living outside of the United States? An automatic discount is applied to ensure the price is proportional to your local currency and cost of living.
Postfix=" 🖤"
X=(370*#Scale#)+(#Sec.P#*#TweenNode1#)
Y=R
W=(550*#Scale#)
StringAlign=Left
MeterStyle=String:S | Text:S
Container=Container
Group=Tweenable
DynamicVariables=1
Hidden=(#LanguageNum#>1?0:1)

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=#Sec.P#
Y=(575*#Scale#)
Shape=Rectangle 0,0,(260*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables GetSupporter 1][#ExecuteAnimation[#NoAnimationNum]]
Container=Container

[ButtonText]
Meter=String
X=(260/2*#Scale#)r
Y=(21*#Scale#)r
W=(245*#Scale#)
H=(30*#Scale#)
Text=Get the supporter version
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Container
ClipString=1

[Button2]
Meter=Shape
X=((250/2+20)*#scale#)r
Y=(-20*#Scale#)r
Shape=Rectangle 0,0,(145*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 255,255,255,25
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,85"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,25"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables GetSupporter 0][#ExecuteAnimation[#NoAnimationNum]]
Container=Container

[ButtonText2]
Meter=String
X=(145/2*#Scale#)r
Y=(21*#Scale#)r
W=(135*#Scale#)
H=(30*#Scale#)
Text=Maybe later
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,225
MeterStyle=String:S
Container=Container
ClipString=1
