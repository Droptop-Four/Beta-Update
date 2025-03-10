[Rainmeter]
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
Group=DroptopSuite
SkinWidth=((100*#DroptopSize#)+(#DropdownStrokeWidth#*2))
OnRefreshAction=[!Show][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 1"][!SetVariableGroup PowerMenuLoadState 1 "DroptopSuite"]
OnCloseAction=[!SetVariableGroup PowerMenuLoadState 0 "DroptopSuite"]
RightMouseDownAction=[]
MouseActionCursor=0
; Update=100

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=0
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=250
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
SlideVar=0
SlideOpac=0

W=15
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]

Blur=0

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#Blur#)
Type=[#BlurType[#BlurTypeNum]0[#Win10Apps]0]
DynamicVariables=1
Group=Animation
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
BorderVisible=#ShowDropdownBlurBorder#
DarkMode=((#ChamLum1#-1)*-1)
DynamicVariables=1

;---

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation | Animation.HL
ActionList1=Start1|Repeat SlideOut,#W#,10|Finish
Start1=
SlideOut=[!SetVariable SlideVar "(Clamp(#SlideVar#+5,0,50))"][!SetVariable SlideOpac "(Clamp(#SlideOpac#+0.1,0,1))"]#U#
Finish=[!SetVariable Blur #DropdownMenuBlur#][!SetOption BlurBehind BlurEnabled #DropdownMenuBlur#][!SetVariable SlideVar 50][!SetVariable SlideOpac 1][!SetOption BlurBehind DynamicVariables 0][!UpdateMeasure BlurBehind]#U#
ActionList2=Start2|Repeat SlideIn,#W#,10|Terminate
Start2=[!HideMeter Action][!SetOption Icon1 ImageTint "#*DropdownFontColor1*#"][!SetOption Icon2 ImageTint "#*DropdownFontColor1*#"][!HideMeterGroup ButtonBG]
SlideIn=[!SetOption BlurBehind BlurEnabled 0][!SetOption BlurBehind Border "None"][!SetOption BlurBehind Corner "None"][!SetOption BlurBehind DynamicVariables 1][!UpdateMeasure BlurBehind][!HideMeterGroup Text][!SetVariable SlideVar "(Clamp(#SlideVar#-5,0,50))"][!SetVariable SlideOpac "(Clamp(#SlideOpac#-0.1,0,1))"]#U#
Terminate=[!Hide][!DeactivateConfig]
ActionList3=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,8|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.1,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
DynamicVariables=1
UpdateDivider=-1
IgnoreWarnings=1

[IconStyle]
Meter=Image
ImageTint=#DropdownFontColor1#
ImageAlpha=(255*#SlideOpac#)
W=(55*#DroptopSize#)
H=(55*#DroptopSize#)
X=((([Background:W]-[#CURRENTSECTION#:W])-([#CURRENTSECTION#:W]/2))+(5*#DroptopSize#))
DynamicVariables=1

[InfoStyle]
StringAlign=Center
X=(((#SlideVar#*2)*#DroptopSize#)/2)
Y=(-7*#DroptopSize#)R
W=((#SlideVar#*2)*#DroptopSize#)
FontFace=#UniversalFont#
FontColor=#DropdownFontColor1#,(255*#SlideOpac#)
DynamicVariables=1
FontSize=(12*#DroptopSize#)
Antialias=1
InlineSetting=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#SlideVar#*2)*#DroptopSize#),(175*#DroptopSize#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,((#ForceOpaque#=1?255:((#DropdownMenuOpacity1#*[#MicaEnabled0[#Win10Apps]])+1))*#SlideOpac#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,(#DropdownStrokeOpacity#*#SlideOpac#)
LeftMouseDownAction=[]
DynamicVariables=1
Group=Animation

[Button1BG]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#/2),(#DropdownMenuCutout#/2),([Background:W]-(10*#DroptopSize#)-#DropdownStrokeWidth#),(65*#DroptopSize#),(5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color #DropdownItemHL#,0
X=((5*#DroptopSize#)+(#DropdownStrokeWidth#/2))
Y=(15*#DroptopSize#)
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption #CURRENTSECTION# FillColor "Fill Color #*DropdownItemHL*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)][!SetOption Icon1 ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption Text1 FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button1][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*DropdownItemHL*#,0][!SetOption Icon1 ImageTint "#*DropdownFontColor1*#"][!SetOption Text1 FontColor "#*DropdownFontColor1*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button1][!Redraw]
DynamicVariables=1
Group=Animation | Button1 | ButtonBG | Animation.HL

[Button2BG]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#/2),(#DropdownMenuCutout#/2),([Background:W]-(10*#DroptopSize#)-#DropdownStrokeWidth#),(65*#DroptopSize#),(5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color #DropdownItemHL#,0
X=((5*#DroptopSize#)+(#DropdownStrokeWidth#/2))
Y=(95*#DroptopSize#)
LeftMouseDownAction=[!SetOption RunCommand.Dynamic Parameter "shutdown.exe /a" "Droptop\DropdownBar"][!UpdateMeasure RunCommand.Dynamic "Droptop\DropdownBar"][!HideMeterGroup ButtonBG][!CommandMeasure MeasureActionTimer "Execute 2"][!Delay 200][!CommandMeasure RunCommand.Dynamic "Run" "Droptop\DropdownBar"]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption #CURRENTSECTION# FillColor "Fill Color #*DropdownItemHL*#,((#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#)][!SetOption Icon2 ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption Text2 FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button2][!Redraw][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*DropdownItemHL*#,0][!SetOption Icon2 ImageTint "#*DropdownFontColor1*#"][!SetOption Text2 FontColor "#*DropdownFontColor1*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button2][!Redraw]
DynamicVariables=1
Group=Animation | Button1 | ButtonBG | Animation.HL

[Icon1]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Images\PowerIcons\#Activity#.png
Group=Animation | Button1
Y=(10*#DroptopSize#)

[Text1]
Meter=String
MeterStyle=InfoStyle
Group=Animation | Button1 | Text
Text=[#PowerMenu[#Activity]]

[Icon2]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Images\PowerIcons\Cancel.png
Group=Animation | Button2
Y=(90*#DroptopSize#)

[Text2]
Meter=String
MeterStyle=InfoStyle
Group=Animation | Button2 | Text
Text=#PowerCancel#
