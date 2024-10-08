[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition][#MyAppIsWebView]]
RightMouseDoubleClickAction=[!SkinCustomMenu]
OnCloseAction=[!EnableMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"]
; LeftMouseDownAction=[]

ContextTitle=Refresh
ContextAction=[!Refresh]
ContextTitle2=------
ContextAction2=
ContextTitle3=ℹ How to make a Community App
ContextAction3=#CloseMenu#["https://docs.droptopfour.com/community-apps/introduction"]
ContextTitle4=------
ContextAction4=
ContextTitle5=Open Variables.inc
ContextAction5=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\Variables.inc"]
ContextTitle6=Open VariablesDefault.inc
ContextAction6=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\VariablesDefault.inc"]
ContextTitle7=Open VariablesData.inc
ContextAction7=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\VariablesData.inc"]
ContextTitle8=------
ContextAction8=
ContextTitle9=Open BackgroundProcesses.inc
ContextAction9=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\BackgroundProcesses\BackgroundProcesses.inc"]
ContextTitle10=Open BarModifier.inc
ContextAction10=#CloseMenu#["#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\BarModifier\BarModifier.inc"]
ContextTitle11=------
ContextAction11=
ContextTitle12=Open MainConfig.inc (Main app)
ContextAction12=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Config\MainConfig.inc"]
ContextTitle13=Open FolderConfig.inc
ContextAction13=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Folder\Config\FolderConfig.inc"]
ContextTitle14=------
ContextAction14=
ContextTitle15=Open MainConfig.inc (Settings)
ContextAction15=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Config\MainConfig.inc"]
ContextTitle16=Open FolderConfig.inc
ContextAction16=#CloseMenu#["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Folder\Config\FolderConfig.inc"]
ContextTitle17=------
ContextAction17=
ContextTitle18=📂 Open #MyAppName# folder
ContextAction18=#CloseMenu#["#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#]
ContextTitle19=📂 Open Icons folder
ContextAction19=#CloseMenu#["#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Icons"]
ContextTitle20=------
ContextAction20=
ContextTitle21=Edit skin (#CURRENTFILE#)
ContextAction21=#CloseMenu#["#CONFIGEDITOR#" "#CURRENTPATH##CURRENTFILE#"]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1
DefaultAnchorX=100%

[Variables]
NumberOfItems=1
NumberOfDividers=0
NumberOfBoxes=0

DividerExists1=0
DividerExists2=0
DividerExists3=0
DividerExists4=0
DividerExists5=0
DividerExists6=0
DividerExists7=0
DividerExists8=0
DividerExists9=0

@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@IncludeUserSettings=#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc
@IncludeThemeOptions=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#Settings.inc
@IncludeThemeDesign=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#.inc
@IncludeThemeMeasures=#SKINSPATH#Droptop Folders\Other files\Themes\ThemeMeasures.inc
@IncludeSystemTraySubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\SystemTraySubMenuMeters.inc
@IncludeLanguage=#SKINSPATH#Droptop\@Resources\GlobalVar\Languages\[#Language[#LanguageNum]].inc
@IncludeVariablesData=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesData.inc
@IncludeVariablesDefault=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesDefault.inc
@IncludeVariables=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\Variables.inc

MyVariablesLocDefault=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\VariablesDefault.inc

WriteKeyToDefault01=[!WriteKeyValue Variables [#ItemToggleKey[#[#*CURRENTSECTION*]]] [#[#ItemToggleKey[#[#*CURRENTSECTION*]]]] "#MyVariablesLocDefault#"]
WriteKeyToDefault11=

WriteKeyToDefault00=[!WriteKeyValue Variables [#CheckmarkKey[#ItemCheckmarkGroup[#[#*CURRENTSECTION*]]]] "[#ItemCheckmarkValue[#[#*CURRENTSECTION*]]]" "#MyVariablesLocDefault#"]
WriteKeyToDefault10=

InputName1=VariableName1
InputName2=VariableName2

Input1=[#*[#*InputName1*]*]
Input2=[#*[#*InputName2*]*]

InputLoc1=#MyVariablesLoc#
InputLoc2=#MyVariablesLoc#

;---

WebViewTopHeight=(((#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#+#DropdownItemYOffset#+(#DropdownStrokeWidth#/2)+32+(16*#DroptopSize#))*((#WebViewHideTop#-1)*-1))+(((#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2))*#WebViewHideTop#))

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections][#Win10Apps]]
Padding0=#DropdownItemPadding1#,#DropdownItemPaddingY#,(#DropdownArrowHighlightW#+(10*#DroptopSize#)),(#DropdownItemPaddingY#*-1)

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5
Box6=6

Box99=99

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5
Box6Text=6

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4
BoxPosition6=5

BoxPosition99=2

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]

;---------------------------

@IncludeCommunityAppWebView=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppWebView[#CustomAppType[#CustomAppType-[#CURRENTFILE]]].inc

;---------------------------

[CheckGUID]
Measure=String
String=#MyAppGUID#
RegExpSubstitute=1
Substitute="^$":"0","^...*$":"1"
UpdateDivider=-1

;---------------------------

[HotInput]
Measure=Plugin
Plugin=HotInput
UseLuaEscape=1
InputAction=[!CommandMeasure InputHandler """HandleInput('$input$')"""]
NavigateAction=[!CommandMeasure InputHandler """HandleNavigation('$navigation$')"""]

[InputHandler]
Measure=Script
ScriptFile=#SKINSPATH#Droptop\@Resources\Scripts\Lua\InputHandler.lua
Multiline=0
MainMeterName=1
TargetVariableName=
ContainingFilePath=
CaretMeterName=MICaret
FakeMeterName=MIFake
CaretCharacter=|
UpdateGroup=Items
OnFinishAction=#InputFinishAction#
DynamicVariables=1

;---------------------------

[InputBox1]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),(1*#DroptopSize#),(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),(#DropdownItemHeight#-(2*#DroptopSize#)),#DropdownBGCorner# | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
; Y=((#DropdownIconYOffset#)-((#DropdownIconYOffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputBox2]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),(1*#DroptopSize#),(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),(#DropdownItemHeight#-(2*#DroptopSize#)),(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
; Y=((#DropdownIconYOffset#)-((#DropdownIconYOffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Hidden=1
Container=AnimationContainer

[InputStyle1]
Text=[#[#InputName1]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input1]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName1]"][!SetOption InputHandler ContainingFilePath "[#InputLoc1]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox1 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox1][!Redraw]
MouseOverAction=[!SetOption InputBox1 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox1][!Redraw]
MouseLeaveAction=[!SetOption InputBox1 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox1][!Redraw]
Container=AnimationContainer

[InputStyle2]
Text=[#[#InputName2]]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input2]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName2]"][!SetOption InputHandler ContainingFilePath "[#InputLoc2]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox2 FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox2][!Redraw]
MouseOverAction=[!SetOption InputBox2 FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox2][!Redraw]
MouseLeaveAction=[!SetOption InputBox2 FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox2][!Redraw]
Container=AnimationContainer

;---------------------------

[MICaret]
Meter=String
MeterStyle=InfoStyle
StringAlign=LeftCenter
FontColor=0,0,0,0
InlinePattern2=\|$
InlineSetting2=Color | 0,0,0,255
InlinePattern3=\|$
InlineSetting3=CharacterSpacing | -1.5
InlinePattern4=\|$
InlineSetting4=Weight | 200
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=1
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[SendClipboard]
Measure=Calc
IfCondition=1=1
IfTrueAction=["#SKINSPATH#Droptop\@Resources\Scripts\DroptopAHK.#AHKType#" "SendClipboard"]
IfConditionMode=1
UpdateDivider=-1
Disabled=1

;---------------------------

[CheckNoAvailableOptions]
Measure=String
String=#ItemText1#
IfMatch=#SettingsNoAppOptions#
IfMatchAction=[!SetOption 1 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 1Icon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!DisableMouseAction 1 "LeftMouseDownAction|LeftMouseUpAction|MouseOverAction|MouseLeaveAction"]
DynamicVariables=1

[ComLoadAction]
Measure=Calc
Formula=Counter
IfCondition=(ComLoadAction=1)
IfTrueAction=[!WriteKeyValue Variables "[#MyAppID]" "[#CustomAppPosition]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!SetVariable "[#MyAppID]" "[#CustomAppPosition]" "Droptop\DropdownBar"][!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"]
UpdateDivider=-1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=[#Action[#ItemIsFolder[##CURRENTSECTION#]]]
Padding=#Padding0#
DynamicVariables=1
Y=((#DividerHeight#+(#DividerSpace#*2))*[#DividerExists[#DividerY[##CURRENTSECTION#]]])R
Hidden=(#NumberOfItems#>=#CURRENTSECTION#?0:1)
Container=AnimationContainer

[IconStyle]
ImageName=#ItemIconPath#[#ItemIconFileName[##CURRENTSECTION#]]
W=#IconW#
H=#IconW#
Y=((#DividerHeight#+(#DividerSpace#*2))*[#DividerExists[#DividerY[##CURRENTSECTION#]]])R
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?(#WebViewHideTop#=1?1:0):1)
DynamicVariables=1

[ToggleStyle0]

[ToggleStyle1]
LeftMouseDownAction=[#ItemAction[##CURRENTSECTION#]][!SetVariable AnimateIconNum [##CURRENTSECTION#]][!SetVariable ActionTimer.ToggleIcon [#[#ItemToggleKey[##CURRENTSECTION#]]]][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 5"][!SetVariable [#ItemToggleKey[##CURRENTSECTION#]] ([#[#ItemToggleKey[##CURRENTSECTION#]]]=1?0:1)][!WriteKeyValue Variables [#ItemToggleKey[##CURRENTSECTION#]] [#[#ItemToggleKey[##CURRENTSECTION#]]] "#MyVariablesLoc#"][#WriteKeyToDefault[&CheckGUID]1][!UpdateMeterGroup ToggleGroup.Meters][!UpdateMeasureGroup ToggleGroup.Measures]

[ToggleIconStyle0]

[ToggleIconStyle1]
ImageName=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#IconSize#\toggleat.png
MaskImagePath=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#IconSize#\ToggleMask\#ToggleStyle#\A
MaskImageName=[#[#ItemToggleKey[##CURRENTSECTION#]]].png

[CheckmarkStyle0]

[CheckmarkStyle1]
LeftMouseDownAction=[#ItemAction[##CURRENTSECTION#]][!SetVariable [#CheckmarkKey[#ItemCheckmarkGroup[##CURRENTSECTION#]]] "[#ItemCheckmarkValue[##CURRENTSECTION#]]"][!WriteKeyValue Variables [#CheckmarkKey[#ItemCheckmarkGroup[##CURRENTSECTION#]]] "[#ItemCheckmarkValue[##CURRENTSECTION#]]" "#MyVariablesLoc#"][#WriteKeyToDefault[&CheckGUID]0][!UpdateMeasure MeasureCheckmark[#ItemCheckmarkGroup[##CURRENTSECTION#]]][!UpdateMeterGroup CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].Meters][!UpdateMeasureGroup CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].Measures]

[CheckmarkIconStyle0]

[CheckmarkIconStyle1]
ImagePath=#SKINSPATH#Droptop\@Resources\Icons\Fixed\#IconSize#\Checkmark\#CheckmarkStyle#
ImageName=0.png

[InputIconStyle]
ImageTint=0,0,0,#DropdownItemOpacity#

[AnimationContainer]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimationSysSub#),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color 255,255,255,(255*#ActionTimer.StartAnimationSysSub#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,(255*#ActionTimer.StartAnimationSysSub#)
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2))+(#DropdownStrokeWidth#/2)) | Fill Color 0,0,0,0 | StrokeWidth 0
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
DynamicVariables=1
Group=Animation.SU

[Background]
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2))+(#DropdownStrokeWidth#/2)) | Fill Color 0,0,0,0 | StrokeWidth 0
LeftMouseDownAction=[]
Container=AnimationContainer

[HighlightBackground]
Container=AnimationContainer

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle#
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[2]
Meter=String
MeterStyle=#DefaultMeterStyle#

[3]
Meter=String
MeterStyle=#DefaultMeterStyle#

[4]
Meter=String
MeterStyle=#DefaultMeterStyle#

[5]
Meter=String
MeterStyle=#DefaultMeterStyle#

[6]
Meter=String
MeterStyle=#DefaultMeterStyle#

[7]
Meter=String
MeterStyle=#DefaultMeterStyle#

[8]
Meter=String
MeterStyle=#DefaultMeterStyle#

[9]
Meter=String
MeterStyle=#DefaultMeterStyle#

[10]
Meter=String
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#)

[2Icon]
Meter=Image
MeterStyle=IconStyle

[3Icon]
Meter=Image
MeterStyle=IconStyle

[4Icon]
Meter=Image
MeterStyle=IconStyle

[5Icon]
Meter=Image
MeterStyle=IconStyle

[6Icon]
Meter=Image
MeterStyle=IconStyle

[7Icon]
Meter=Image
MeterStyle=IconStyle

[8Icon]
Meter=Image
MeterStyle=IconStyle

[9Icon]
Meter=Image
MeterStyle=IconStyle

[10Icon]
Meter=Image
MeterStyle=IconStyle

;----------------------

[Divider1]
DynamicVariables=1

[Divider2]
DynamicVariables=1

[Divider3]
DynamicVariables=1

[Divider4]
DynamicVariables=1

[Divider5]
DynamicVariables=1

[Divider6]
DynamicVariables=1

[Divider7]
DynamicVariables=1

[Divider8]
DynamicVariables=1

[Divider9]
DynamicVariables=1

[Divider10]
DynamicVariables=1