[Variables]
LoadingScreenPercent=1

W=40
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

[LoadingTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat Loading1,#W#,400|Repeat Loading2,#W#,400|Repeat
Loading1=[!SetVariable LoadingScreenPercent "(Clamp(#LoadingScreenPercent#-0.00250,0,1))"]#U#
Loading2=[!SetVariable LoadingScreenPercent "(Clamp(#LoadingScreenPercent#+0.00250,0,1))"]#U#
Repeat=[!SetOption LoadingRoundlineText FontSize "(50*#DroptopSize#)"][!SetOption LoadingRoundlineText FontColor "#Roze#"][!SetOption LoadingRoundlineText Text "🐞"][!SetOption LoadingRoundline StrokeColor "Stroke Color #Roze#"][!SetVariable RepeatTimes (#RepeatTimes#+(#RepeatTimes#<2?1:0))][!CommandMeasure LoadingTimer "Execute 1"][!UpdateMeter LoadingRoundlineText][!Redraw]
ActionList2=Finished1|Wait 2000|Finished2
Finished1=[Play "#@#Sounds\Complete.wav"][!Zpos 1][!SetOption LoadingRoundlineText FontColor "235,255,235"][!SetOption LoadingRoundlineText FontSize "(70*#DroptopSize#)"][!SetOption LoadingRoundlineText Text "☑"][!SetOption LoadingRoundline StrokeColor "Stroke Color 235,255,235"][!UpdateMeter LoadingRoundline][!UpdateMeter LoadingRoundlineText][!Redraw]
Finished2=#LoadFinishAction#[#SecondaryExitAction[#SecondaryExitActionNum]]
DynamicVariables=1
IgnoreWarnings=1
Group=Animation

[LoadingBackground]
Meter=Shape
Shape=Rectangle Rectangle 0,0,#WindowWidth#,#WindowHeight#,10 | Fill Color 13,13,15,235 | StrokeWidth 0
LeftMouseDownAction=[]
LeftMouseUpAction=[]
DynamicVariables=1
Hidden=1
Group=LoadingScreen | NoInternetScreen

[LoadingRoundline]
Meter=Shape
Shape=Ellipse 0,0,(90*#DroptopSize#) | Fill Color 0,0,0,0 | StrokeWidth ((2*#DroptopSize#)+((18*#DroptopSize#)*#LoadingScreenPercent#)) | StrokeDashCap Round | Rotate (-720*#LoadingScreenPercent#) | Extend StrokeColor
StrokeColor=Stroke Color #Lime# | StrokeDashes (10*#DroptopSize#),(3*#DroptopSize#)
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
DynamicVariables=1
Hidden=1
Group=LoadingScreen | Animation

[LoadingRoundlineText]
Meter=String
MeterStyle=InputTextStyle
StringAlign=CenterCenter
Text=Generating
FontColor=235,255,235
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
W=(180*#DroptopSize#)
H=(180*#DroptopSize#)
DynamicVariables=1
Hidden=1
Group=LoadingScreen | Animation

[NoInternetText]
Meter=String
MeterStyle=InputTextStyle
StringAlign=CenterCenter
InlinePattern2=☹️
InlineSetting2=Size | ((#InputFontSizeA#*#DroptopSize#)*2)
Text=Internet connection required.#CRLF##CRLF#☹️#CRLF##CRLF#Connect to the Internet and try again.
FontColor=255,255,255
X=(#WindowWidth#/2)
Y=(#WindowHeight#/2)
W=(180*#DroptopSize#)
H=(180*#DroptopSize#)
DynamicVariables=1
Hidden=1
Group=NoInternetScreen