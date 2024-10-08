[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Variables]
HomeIconShadow0=
HomeIconShadow1=S

Shape.1=3
Shape.2=4

ExecuteAnimation0A=[!CommandMeasure LoadActions "Execute 3"]
ExecuteAnimation0B=[!CommandMeasure LoadActions "Execute 4"]
ExecuteAnimation0C=[!CommandMeasure LoadActions "Execute 5"]
ExecuteAnimation0D=[!CommandMeasure LoadActions "Execute 6"]
ExecuteAnimation1A=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]
ExecuteAnimation1B=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

TopBarSectionsColor0=255,255,255,185
TopBarSectionsColor1=56,250,138

TopBarSections0=[\xe906]
TopBarSections1=[\xe901]

; IconsSymbol0=[\xe906]
; IconsSymbol1=[\xe901]

HomeIconCat1=Logos
HomeIconCat2=Creatures
HomeIconCat3=Food
HomeIconCat4=Seasonal
HomeIconCat5=Objects
HomeIconCat6=Symbols

HomeIconColor0=Mono
HomeIconColor1=Color

HomeTint0=0,0,0
HomeTint1=255,255,255

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 150 | ExportVars | Start0 | Wait 600 | Start1 | Wait 800 | ClickOn
ActionList3=Start2 | Wait 1000 | StartAction2
ActionList4=Start3 | Wait 1000 | StartAction2
ActionList5=Start4 | Wait 1000 | StartAction2
ActionList6=Start5 | Wait 1000 | StartAction2
Custom1=[!UnpauseMeasure loop][!Delay 1000][!SetOption Loop StartValue 0]
StartAction2=[!CommandMeasure LoadActions "Execute 2"]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=5
Fetch1=StartP6Title1|000
Fetch2=ThemeName1|Text.1
Fetch3=ThemeName2|Text.2
Fetch4=ThemeName3|Text.3
Fetch5=ThemeName4|Text.4

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1000
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Tween5=Single | Variable | TweenNode6 | 0 | 1 | 1000
Optional1=Easing InOutExpo
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo | Group All
Optional4=Easing OutExpo | Group All
TweenGroup=Tweenable
UpdateDivider=1

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
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

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
X=(#Sec.W#/2)
Y=(80*#Scale#)
Text=Choose a starting theme
StringAlign=Center
MeterStyle=String:S | Header:S

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container.1]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-(700*#Scale#)/2)
Y=(#SCREENAREAHEIGHT#/2-#Sec.H#/2+165*#Scale#*#TweenNode2#)
Shape=Rectangle 0,0,(700*#Scale#),(100*#Scale#),(15*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=270 | 255,255,255,(255*#TweenNode2#) ; 0.4 | 255,255,255,(50*#TweenNode2#) ; 1.0
Group=Tweenable
DynamicVariables=1

[ImageObject.1]
Meter=Image
ImageName=#@#Images\Setup\ThemeImage1.png
W=(700*#Scale#)
PreserveAspectRatio=1
Container=Container.1
DynamicVariables=1

[ImageHome.1]
Meter=Image
ImageTint=255,255,255
; ImageName=#@#TopImages\Home\64\[#HomeIconCat[#HomeIconCatNum]]\[#HomeIconColor[#HomeColorNum]]S\#HomeIconIndex#
ImageName=#SKINSPATH#Droptop Folders\Other files\Home\ButtonColorS.png
W=((78*1.06)*#Scale#)
X=(18*#Scale#)
Y=(5*#Scale#)
Container=Container.1

[Shape.1]
Meter=Shape
X=(-3*#Scale#)r
Y=(-3*#Scale#)r
Shape=Rectangle (2*#Scale#),(2*#Scale#),((703*#Scale#)-(4*#Scale#)),(103*#Scale#),(15*#Scale#) | Fill Color 0,0,0,0 | StrokeWidth (4*#Scale#)
LeftMouseUpAction=[!WriteKeyValue Variables ThemeNum 1 "#@#GlobalVar\UserSettings.inc"][#ExecuteAnimation[#NoAnimationNum]A]

[PulseEffect.1]
Meter=Shape
Shape=Rectangle 0,0,((703*#Scale#)*#TweenNode3#),(109*#Scale#),(15*#Scale#) | Fill Color #Lime2#,(255*#TweenNode2#) | StrokeWidth 0
Container=Shape.1
Group=Tweenable
DynamicVariables=1

[Text.1]
Meter=String
X=(#Sec.P#/2)r
Y=(125*#Scale#-#Sec.P#/2)r
FontSize=(22*#Scale#)
StringAlign=LeftBottom
Container=
FontColor=255,255,255,(255*#TweenNode2#)
FontWeight=800
Text=Default
MeterStyle=String:S | Header2:S
Group=Tweenable
DynamicVariables=1

[Container.2]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-(700*#Scale#)/2)
Y=(#Sec.P#/2-(45*#Scale#))R
Shape=Rectangle 0,0,(700*#Scale#),(100*#Scale#),(15*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=270 | 255,255,255,(255*#TweenNode2#) ; 0.4 | 255,255,255,(50*#TweenNode2#) ; 1.0
Group=Tweenable
DynamicVariables=1

[ImageObject.2]
Meter=Image
ImageName=#@#Images\Setup\ThemeImage2.png
W=(700*#Scale#)
PreserveAspectRatio=1
Container=Container.2
DynamicVariables=1

[ImageHome.2]
Meter=Image
ImageTint=[#HomeTint[#HomeColorNum]]
; ImageName=#@#TopImages\Home\64\[#HomeIconCat[#HomeIconCatNum]]\[#HomeIconColor[#HomeColorNum]][#HomeIconShadow[#HomeColorNum]]\#HomeIconIndex#
ImageName=#SKINSPATH#Droptop Folders\Other files\Home\ButtonColorS.png
W=((78*1.06)*#Scale#)
X=(17*#Scale#)
Y=(5*#Scale#)
Container=Container.2

[Shape.2]
Meter=Shape
X=(-3*#Scale#)r
Y=(-3*#Scale#)r
Text="..."
Shape=Rectangle (2*#Scale#),(2*#Scale#),((703*#Scale#)-(4*#Scale#)),(103*#Scale#),(15*#Scale#) | Fill Color 0,0,0,0 | StrokeWidth (4*#Scale#)
LeftMouseUpAction=[!WriteKeyValue Variables ThemeNum 2 "#@#GlobalVar\UserSettings.inc"][#ExecuteAnimation[#NoAnimationNum]B]

[PulseEffect.2]
Meter=Shape
X=0
Y=0
Shape=Rectangle 0,0,((703*#Scale#)*#TweenNode4#),(109*#Scale#),(15*#Scale#) | Fill Color #Lime2#,(255*#TweenNode2#) | StrokeWidth 0
Container=Shape.2
Group=Tweenable
DynamicVariables=1

[Text.2]
Meter=String
X=(#Sec.P#/2)r
Y=(125*#Scale#-#Sec.P#/2)r
FontSize=(22*#Scale#)
StringAlign=LeftBottom
Container=
FontWeight=800
Text=Color Match
FontColor=255,255,255,(255*#TweenNode2#)
MeterStyle=String:S | Header2:S
Group=Tweenable
DynamicVariables=1

[Container.3]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-(700*#Scale#)/2)
Y=(#Sec.P#/2-(45*#Scale#))R
Shape=Rectangle 0,0,(700*#Scale#),(100*#Scale#),(15*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=270 | 255,255,255,(255*#TweenNode2#) ; 0.4 | 255,255,255,(50*#TweenNode2#) ; 1.0
Group=Tweenable
DynamicVariables=1

[ImageObject.3]
Meter=Image
ImageName=#@#Images\Setup\ThemeImage3.png
W=(700*#Scale#)
PreserveAspectRatio=1
Container=Container.3
DynamicVariables=1

[ImageHome.3]
Meter=Image
ImageTint=255,255,255
; ImageName=#@#TopImages\Home\64\[#HomeIconCat[#HomeIconCatNum]]\[#HomeIconColor[#HomeColorNum]]S\#HomeIconIndex#
ImageName=#SKINSPATH#Droptop Folders\Other files\Home\ButtonColorS.png
W=((78*1.06)*#Scale#)
X=(22*#Scale#)
Y=(5*#Scale#)
Container=Container.3

[Shape.3]
Meter=Shape
X=(-3*#Scale#)r
Y=(-3*#Scale#)r
Text="..."
Shape=Rectangle (2*#Scale#),(2*#Scale#),((703*#Scale#)-(4*#Scale#)),(103*#Scale#),(15*#Scale#) | Fill Color 0,0,0,0 | StrokeWidth (4*#Scale#)
LeftMouseUpAction=[!WriteKeyValue Variables ThemeNum 3 "#@#GlobalVar\UserSettings.inc"][#ExecuteAnimation[#NoAnimationNum]C]

[PulseEffect.3]
Meter=Shape
X=0
Y=0
Shape=Rectangle 0,0,((703*#Scale#)*#TweenNode5#),(109*#Scale#),(15*#Scale#) | Fill Color #Lime2#,(255*#TweenNode2#) | StrokeWidth 0
Container=Shape.3
Group=Tweenable
DynamicVariables=1

[Text.3]
Meter=String
X=(#Sec.P#/2)r
Y=(125*#Scale#-#Sec.P#/2)r
FontSize=(22*#Scale#)
StringAlign=LeftBottom
Container=
FontWeight=800
Text=Color Match
FontColor=255,255,255,(255*#TweenNode2#)
MeterStyle=String:S | Header2:S
Group=Tweenable
DynamicVariables=1

[Container.4]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-(700*#Scale#)/2)
Y=(#Sec.P#/2-(45*#Scale#))R
Shape=Rectangle 0,0,(700*#Scale#),(100*#Scale#),(15*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=270 | 255,255,255,(255*#TweenNode2#) ; 0.4 | 255,255,255,(50*#TweenNode2#) ; 1.0
Group=Tweenable
DynamicVariables=1

[ImageObject.4]
Meter=Image
ImageName=#@#Images\Setup\ThemeImage4.png
W=(700*#Scale#)
PreserveAspectRatio=1
Container=Container.4
DynamicVariables=1

[ImageHome.4]
Meter=Image
ImageTint=255,255,255
; ImageName=#@#TopImages\Home\64\[#HomeIconCat[#HomeIconCatNum]]\[#HomeIconColor[#HomeColorNum]]S\#HomeIconIndex#
ImageName=#SKINSPATH#Droptop Folders\Other files\Home\ButtonColorS.png
W=((78*1.06)*#Scale#)
X=(28*#Scale#)
Y=(5*#Scale#)
Container=Container.4

[Shape.4]
Meter=Shape
X=(-3*#Scale#)r
Y=(-3*#Scale#)r
Text="..."
Shape=Rectangle (2*#Scale#),(2*#Scale#),((703*#Scale#)-(4*#Scale#)),(103*#Scale#),(15*#Scale#) | Fill Color 0,0,0,0 | StrokeWidth (4*#Scale#)
LeftMouseUpAction=[!WriteKeyValue Variables ThemeNum 4 "#@#GlobalVar\UserSettings.inc"][#ExecuteAnimation[#NoAnimationNum]D]

[PulseEffect.4]
Meter=Shape
X=0
Y=0
Shape=Rectangle 0,0,((703*#Scale#)*#TweenNode6#),(109*#Scale#),(15*#Scale#) | Fill Color #Lime2#,(255*#TweenNode2#) | StrokeWidth 0
Container=Shape.4
Group=Tweenable
DynamicVariables=1

[Text.4]
Meter=String
X=(#Sec.P#/2)r
Y=(125*#Scale#-#Sec.P#/2)r
FontSize=(22*#Scale#)
StringAlign=LeftBottom
Container=
FontWeight=800
Text=Color Match
FontColor=255,255,255,(255*#TweenNode2#)
MeterStyle=String:S | Header2:S
Group=Tweenable
DynamicVariables=1


