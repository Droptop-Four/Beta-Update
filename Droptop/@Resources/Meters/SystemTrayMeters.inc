[Rainmeter]
MouseActionCursor=Arrow
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
RightMouseDownAction=[]
SkinWidth=(#DropdownMenuWidth#+#SysAppMenuXOffset#+#SysAppMenuWOffset#+2)
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"]

[Variables]
MenuBlur=#DropdownMenuBlur#

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]

;-----------------------------------
Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
;---
Padding0B=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1B=(#DropdownItemPadding1#*2),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
;-----------------------------------

SubmenuDirection=1

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
Type=[#BlurType[#BlurTypeNum]0]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
DynamicVariables=1

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation | Animation.HL | Animation.SU
ActionList1=Wait 200|FolderMouseOver
FolderMouseOver=[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
ActionList2=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,4|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.2,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
;Startup for Community Apps submenus
ActionList3=Wait 16|ActionTimer.StartAnimationLeft.Start|Wait 32|Repeat ActionTimer.StartAnimationLeft,10,16|Wait 100|ActionTimer.StartAnimationLeft.End
ActionTimer.StartAnimationLeft.Start=[!#Show#]
ActionTimer.StartAnimationLeft=[!SetVariable ActionTimer.StartAnimationSysSub "(Clamp(#ActionTimer.StartAnimationSysSub#+0.0625,0,1))"]#U.SU#
ActionTimer.StartAnimationLeft.End=[!SetVariable ActionTimer.StartAnimationSysSub 1 "#CURRENTCONFIG#\Folder"]#U.SU#
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

[MeasureActionTimer.Actions]
Measure=Calc
IfCondition=#ActionTimer.ActionNum#=1
IfTrueAction=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.StartAnimationSysSub 0 "#CURRENTCONFIG#\Folder"][!DeactivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!SetAnchor "100%" "0%" "#CURRENTCONFIG#\Folder"][!Move ([#CURRENTCONFIGX]-(#DropdownSubMenuWidth#*0.19)-(#DropdownSubMenuXOffset#*2)-#SysAppMenuXOffset#+1) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]-(#DropdownIconYoffset#-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)) "#CURRENTCONFIG#\Folder"][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!SetVariable SelectedFolderY [[#CurrentSubFolder]:Y] "#CURRENTCONFIG#\Folder"][!SetVariable ParentFolderX [#CURRENTCONFIGX] "#CURRENTCONFIG#\Folder"][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!UpdateMeasure * "#CURRENTCONFIG#\Folder"][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!Redraw "#CURRENTCONFIG#\Folder"][!CommandMeasure MeasureActionTimer "Stop 2" "#CURRENTCONFIG#\Folder"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 2" "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.ActionNum 0][!DisableMeasure #CURRENTSECTION#]
IfCondition2=#ActionTimer.ActionNum#=2
IfTrueAction2=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.StartAnimationSysSub 0 "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!SetAnchor "0%" "0%" "#CURRENTCONFIG#\Folder"][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#+#SysAppMenuXOffset#+1) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]-(#DropdownIconYoffset#-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)) "#CURRENTCONFIG#\Folder"][!SetVariable SelectedFolderY [[#CurrentSubFolder]:Y] "#CURRENTCONFIG#\Folder"][!SetVariable ParentFolderX [#CURRENTCONFIGX] "#CURRENTCONFIG#\Folder"][!UpdateMeasure * "#CURRENTCONFIG#\Folder"][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!Redraw "#CURRENTCONFIG#\Folder"][!CommandMeasure MeasureActionTimer "Stop 2" "#CURRENTCONFIG#\Folder"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 2" "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.ActionNum 0][!DisableMeasure #CURRENTSECTION#]
IfConditionMode=1
DynamicVariables=1
Disabled=1

;[!Move [#CURRENTCONFIGX] ([#CURRENTCONFIGY]+[#CurrentSubFolder#:Y]-#DropdownTopBottomSpacing#+1) "#CURRENTCONFIG#\Folder"]

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
StringAlign=LeftCenter
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
X=(1+#SysAppMenuXOffset#)
Y=R
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
Text="%1"
FontWeight=#FontWeight#
Padding=#Padding0#
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#-(#*DropdownItemOpacity*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
Hidden=(#NumberOfItems#>=#CURRENTSECTION#?0:1)
DynamicVariables=1
ClipString=1
Group=Items

[FolderStyle]
; LeftMouseDownAction=#ResetActiveFolders#[!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CURRENTSECTION#.ini"][!Move ([#CURRENTCONFIGX]-#DropdownSubMenuWidth#-#DropdownSubMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-#DropdownItemYOffset#-(#DropdownStrokeWidth#-(#DropdownStrokeWidth#%1))-1) "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!ShowMeter HighlightSelected][!UpdateMeter HighlightSelected][!Redraw]
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontEffectColor "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
UpdateDivider=1

@IncludeArrowStyle=#SKINSPATH#Droptop\@Resources\Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[IconStyle]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R
W=#IconW#
H=#IconH#
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Greyscale=#DropdownIconGreyscale#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
; Group=Items

[BackgroundStyle]
LeftMouseUpAction=[]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

; [AnimationContainer]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color 255,255,255,255 | StrokeWidth #DropdownStrokeWidth# | Stroke Color 0,0,0,255
; Shape2=#FlatTopShape#
; Shape3=Combine Shape | Union Shape2
; Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
; X=#SysAppMenuXOffset#
; DynamicVariables=1

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
X=#SysAppMenuXOffset#
DynamicVariables=1
; Container=AnimationContainer

;----------------------------------------------------
; Item Highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=(1+#SysAppMenuXOffset#)
Group=Highlight | HL | Animation.HL
DynamicVariables=1
Hidden=1

[HighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShapeB[#HLSelectedShapeNum]]
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0
ShapeOption=[#HLSelectedOptionB[#HLSelectedShapeNum]]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=(1+#SysAppMenuXOffset#)
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

[1Icon]
Meter=Image

[2Icon]
Meter=Image

[3Icon]
Meter=Image

[4Icon]
Meter=Image

[5Icon]
Meter=Image

[6Icon]
Meter=Image

[7Icon]
Meter=Image

[8Icon]
Meter=Image

[9Icon]
Meter=Image

[10Icon]
Meter=Image

; ;----------------------

[0Arrow]
Meter=Shape

[1Arrow]
Meter=Shape
Y=[1Icon:Y]

[2Arrow]
Meter=Shape

[3Arrow]
Meter=Shape

[4Arrow]
Meter=Shape

[5Arrow]
Meter=Shape

[6Arrow]
Meter=Shape

[7Arrow]
Meter=Shape

[8Arrow]
Meter=Shape

[9Arrow]
Meter=Shape

[10Arrow]
Meter=Shape
