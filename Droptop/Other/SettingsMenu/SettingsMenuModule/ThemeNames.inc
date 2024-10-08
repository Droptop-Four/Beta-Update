[Rainmeter]
OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!UpdateMeter *][!UpdateMeter *]

[Variables]
@Include99Settings=#@#Themes\99Settings.inc
@IncludeNumSettings=#@#Themes\#ThemeNum#Settings.inc

; ActivateSubFolder00=
; ActivateSubFolder10=
; ActivateSubFolder01=
; ActivateSubFolder11=

ThemeStringX24=23
ThemeStringX1=23
ThemeStringX2=1
ThemeStringX3=2
ThemeStringX4=3
ThemeStringX5=4
ThemeStringX6=5
ThemeStringX6=5
ThemeStringX7=6
ThemeStringX8=7
ThemeStringX9=8
ThemeStringX10=9
ThemeStringX11=10
ThemeStringX12=11
ThemeStringX13=12
ThemeStringX14=13
ThemeStringX15=14
ThemeStringX16=15
ThemeStringX17=16
ThemeStringX18=17
ThemeStringX19=18
ThemeStringX20=19
ThemeStringX21=20
ThemeStringX22=21

1Shape=1
2Shape=2
3Shape=3
4Shape=4
5Shape=5
6Shape=6
7Shape=7
8Shape=8
9Shape=9
10Shape=10
11Shape=11
12Shape=12
13Shape=13
14Shape=14
15Shape=15
16Shape=16
17Shape=17
18Shape=18
19Shape=19
20Shape=20
21Shape=21
22Shape=22
23Shape=23
24Shape=24

CurrentThemeItem1=1
CurrentThemeItem2=2
CurrentThemeItem3=3
CurrentThemeItem4=4
CurrentThemeItem5=5
CurrentThemeItem6=6
CurrentThemeItem7=7
CurrentThemeItem8=8
CurrentThemeItem9=9
CurrentThemeItem10=10
CurrentThemeItem11=11
CurrentThemeItem12=12
CurrentThemeItem13=13
CurrentThemeItem14=14
CurrentThemeItem15=15
CurrentThemeItem16=16
CurrentThemeItem17=17
CurrentThemeItem18=18
CurrentThemeItem19=19
CurrentThemeItem20=20
CurrentThemeItem21=21
CurrentThemeItem22=22
CurrentThemeItem99=23

HLSelectedShape1=[[#*CurrentSubFolder*]:X],0,[[#*CurrentSubFolder*]:W],#DropdownItemHeight#,([#*DropdownItemHeight*]/4) | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedShape2=(#DropdownMenuCutout#+#DropdownHLOffsetX#+(0.5*#DroptopSize#)),(0.5*#DroptopSize#),([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-(#DropdownMenuCutout#*2)+(([#*DropdownMenuWidth*]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)-(1*#DroptopSize#)),(#DropdownItemHeight#-(1*#DroptopSize#)),[#*DropdownHighlightCorner*] | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

; [MeasureSupporter]
; Measure=Calc
; IfCondition=#Supporter#=0
; IfTrueAction=[!SetOptionGroup SupporterThemes ImageName "#@#Icons\Fixed\#IconSize#\lock.png"][!Redraw]

[InfoStyle]
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup CustomAppSubmenus][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!WriteKeyValue Variables SettingsMenuNumber "#SettingsMenuNumber#.#CurrentFolder#" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuIndex#SettingsMenuBlock# #CurrentFolder# "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex #CurrentFolder# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Redraw][!Delay 105][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#+1)) "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!CommandMeasure MeasureActionTimer "Stop 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"]
MiddleMouseUpAction=["#@#Themes\#CURRENTSECTION#Settings.inc"]#CloseSettingsMenu#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
X=1
Padding=0,0,0,0

[SupporterThemeStyle0]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
X=(([[#ThemeStringX[#CURRENTSECTION]]:XW]+[#CURRENTSECTION#:W])>(#DropdownMenuWidth#-(10*#DroptopSize#))?(5*#DroptopSize#):([[#ThemeStringX[#CURRENTSECTION]]:XW]+(5*#DroptopSize#)))
Y=(([[#ThemeStringX[#CURRENTSECTION]]:XW]+[#CURRENTSECTION#:W])>(#DropdownMenuWidth#-(10*#DroptopSize#))?([[#ThemeStringX[#CURRENTSECTION]]:Y]+(([[#ThemeStringX[#CURRENTSECTION]]:H]*1.5)+(5*#DroptopSize#))):([[#ThemeStringX[#CURRENTSECTION]]:Y]+([[#ThemeStringX[#CURRENTSECTION]]:H]/2)))
W=
H=(#DropdownItemFontSize#*3)
Padding=(10*#DroptopSize#),2,(10*#DroptopSize#),0
ClipString=2
ClipStringW=(#DropdownMenuWidth#-(30*#DroptopSize#))
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/2)"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[SupporterThemeStyle1]
X=(([[#ThemeStringX[#CURRENTSECTION]]:XW]+[#CURRENTSECTION#:W])>(#DropdownMenuWidth#-(10*#DroptopSize#))?(5*#DroptopSize#):([[#ThemeStringX[#CURRENTSECTION]]:XW]+(5*#DroptopSize#)))
Y=(([[#ThemeStringX[#CURRENTSECTION]]:XW]+[#CURRENTSECTION#:W])>(#DropdownMenuWidth#-(10*#DroptopSize#))?([[#ThemeStringX[#CURRENTSECTION]]:Y]+(([[#ThemeStringX[#CURRENTSECTION]]:H]*1.5)+(5*#DroptopSize#))):([[#ThemeStringX[#CURRENTSECTION]]:Y]+([[#ThemeStringX[#CURRENTSECTION]]:H]/2)))
W=
H=(#DropdownItemFontSize#*3)
Padding=(10*#DroptopSize#),2,(8*#DroptopSize#),0
ClipString=2
ClipStringW=(#DropdownMenuWidth#-(30*#DroptopSize#))

[AnimationContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimation#),([22:Y]+[22:H]+#DropdownIconYOffset#+#DropdownItemYOffset#-#DropdownStrokeWidth#),#DropdownBGCorner# | Fill Color 255,255,255,(255*#ActionTimer.StartAnimation#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,(255*#ActionTimer.StartAnimation#)
Shape2=
DynamicVariables=1
Group=Animation.SU

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),([22:Y]+[22:H]+#DropdownIconYOffset#+#DropdownItemYOffset#-#DropdownStrokeWidth#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=
DynamicVariables=1
Container=AnimationContainer

[CurrentThemeShape]
Meter=Shape
Shape=Rectangle 0,0,[[#CurrentThemeItem[#ThemeNum]]:W],[[#CurrentThemeItem[#ThemeNum]]:H],#DropdownCornerMinMax1# | Fill Color #Lime#,(#DropdownItemOpacity#/4) | StrokeWidth 1 | Stroke Color #Lime#,85
X=[[#CurrentThemeItem[#ThemeNum]]:X]
Y=([[#CurrentThemeItem[#ThemeNum]]:Y]-#DropdownItemPaddingY#)
DynamicVariables=1
Container=AnimationContainer

[HighlightBackground]
Meter=Shape
Shape=Rectangle ([#CurrentSubFolder#:X]-1),([#CurrentSubFolder#:Y]-#DropdownItemPaddingY#),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape2=Rectangle ([#CurrentSubFolder#:X]-1),([#CurrentSubFolder#:Y]-#DropdownItemPaddingY#),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle ([#CurrentSubFolder#:X]-1),([#CurrentSubFolder#:Y]-#DropdownItemPaddingY#),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle ([#CurrentSubFolder#:X]-1),([#CurrentSubFolder#:Y]-#DropdownItemPaddingY#),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
HighlightBackgroundGradient=180 | #DropdownFontColor1#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 0.4 | #DropdownFontColor1#,0 ; 0.8 | #DropdownFontColor1#,0 ; 1.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=1
Y=
Group=Highlight | HL | Animation.HL
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[HighlightSelected]
Meter=Shape
Shape=Rectangle ([#CurrentSubFolder#:X]-1),(#DropdownItemPaddingY#*-1),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/5) | StrokeWidth 0
Shape2=Rectangle ([#CurrentSubFolder#:X]-1),(#DropdownItemPaddingY#*-1),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle ([#CurrentSubFolder#:X]-1),(#DropdownItemPaddingY#*-1),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle ([#CurrentSubFolder#:X]-1),(#DropdownItemPaddingY#*-1),[#CurrentSubFolder#:W],[#CurrentSubFolder#:H],#DropdownCornerMinMax1# | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0
HighlightBackgroundGradient=180 | #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) ; 0.4 | #DropdownItemHL#,0 ; 0.8 | #DropdownItemHL#,0 ; 1.0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Group=HighlightSelected
DynamicVariables=1
Hidden=1
Container=AnimationContainer

; [Background]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(([22:YH]-[1:Y])+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; DynamicVariables=1

; [CustomThemeName]
; Measure=String
; String=#CustomThemeName#
; Substitute="My Custom Theme":"#ThemeName99#"

[23]
Meter=String
MeterStyle=InfoStyle | SupporterThemeStyle1
PostFix="  (Community theme)"
X=(5*#DroptopSize#)
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[1]
MeterStyle=InfoStyle | SupporterThemeStyle1
X=(5*#DroptopSize#)
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+[23:H]+(5*#DroptopSize#))

[2]
MeterStyle=InfoStyle | SupporterThemeStyle1

[3]
MeterStyle=InfoStyle | SupporterThemeStyle1

[4]
MeterStyle=InfoStyle | SupporterThemeStyle1

[5]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[6]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[7]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[8]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[9]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[10]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[11]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[12]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[13]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[14]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[15]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[16]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[17]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[18]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[19]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[20]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[21]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[22]
MeterStyle=InfoStyle | SupporterThemeStyle#Supporter#

[ThemeShapeStyle0]
Shape=Rectangle 0,0,[[##CURRENTSECTION#]:W],[[##CURRENTSECTION#]:H],#DropdownCornerMinMax1# | Fill Color 255,255,255,(#DropdownItemOpacity#/10) | StrokeWidth 1 | Stroke Color 0,0,0,55
X=[[##CURRENTSECTION#]:X]
Y=([[##CURRENTSECTION#]:Y]-#DropdownItemPaddingY#)
DynamicVariables=1
Container=AnimationContainer

[ThemeShapeStyle1]
Shape=Rectangle 0,0,[[##CURRENTSECTION#]:W],[[##CURRENTSECTION#]:H],#DropdownCornerMinMax1# | Fill Color 255,255,255,(#DropdownItemOpacity#/6) | StrokeWidth 1 | Stroke Color 0,0,0,105
X=[[##CURRENTSECTION#]:X]
Y=([[##CURRENTSECTION#]:Y]-#DropdownItemPaddingY#)
DynamicVariables=1
Container=AnimationContainer

[1Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle1

[2Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle1

[3Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle1

[4Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle1

[5Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[6Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[7Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[8Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[9Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[10Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[11Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[12Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[13Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[14Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[15Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[16Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[17Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[18Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[19Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[20Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[21Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[22Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle#Supporter#

[23Shape]
Meter=Shape
MeterStyle=ThemeShapeStyle1

[1Icon]
Group=

[1Arrow]
Group=

[2Icon]
Group=

[2Arrow]
Group=

[3Icon]
Group=

[3Arrow]
Group=

[4Icon]
Group=

[4Arrow]
Group=

[5Icon]
Group=

[5Arrow]
Group=

[6Icon]
Group=

[6Arrow]
Group=

[7Icon]
Group=

[7Arrow]
Group=

[8Icon]
Group=

[8Arrow]
Group=

[9Icon]
Group=

[9Arrow]
Group=

[10Icon]
Group=

[10Arrow]
Group=

[11Icon]
Group=

[11Arrow]
Group=

[12Icon]
Group=

[12Arrow]
Group=

[13Icon]
Group=

[13Arrow]
Group=

[14Icon]
Group=

[14Arrow]
Group=

[15Icon]
Group=

[15Arrow]
Group=

[16Icon]
Group=

[16Arrow]
Group=

[17Icon]
Group=

[17Arrow]
Group=

[18Icon]
Group=

[18Arrow]
Group=

[19Icon]
Group=

[19Arrow]
Group=

[20Icon]
Group=

[20Arrow]
Group=

[21Icon]
Group=

[21Arrow]
Group=

[22Icon]
Group=

[22Arrow]
Group=

[23Icon]
Group=

[23Arrow]
Group=