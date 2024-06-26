[Rainmeter]
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
Group=DroptopSuite | Tray | Folders | Submenus | CustomAppSubmenus
MouseActionCursor=Arrow
; SkinWidth=(#DropdownSubMenuWidth#+2)
OnRefreshAction=[!Hide]
RightMouseDownAction=[]
Update=-1

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

[Metadata]
Name=Droptop Four
Author=Cariboudjan / Thomas Sven Whittaker
Information=The frogurt is also cursed
License=Creative Commons Attribution-Non-Commercial-Share Alike 3.0

[Variables]

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]

ParentFolderX=0

;-----------------------------------
; Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownItemPadding2#,(#DropdownItemPaddingY#*-1)
Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
; Padding1=#DropdownItemPadding2#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
Padding1=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
;---
Padding0B=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,(#DropdownNoIconPadding#*2),(#DropdownItemPaddingY#*-1)
Padding1B=(#DropdownNoIconPadding#*2),#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
;-----------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#MenuBlur#)
Type=[#BlurType[#BlurTypeNum]0]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
DynamicVariables=1

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation | Animation.HL | Animation.SU
ActionList1=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,4|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.2,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
ActionList2=Wait 16|ActionTimer.StartAnimationLeft.Start|Wait 32|Repeat ActionTimer.StartAnimationLeft,10,16|Wait 100|ActionTimer.StartAnimationLeft.End
ActionTimer.StartAnimationLeft.Start=[!#Show#]
ActionTimer.StartAnimationLeft=[!SetVariable ActionTimer.StartAnimationSysSub "(Clamp(#ActionTimer.StartAnimationSysSub#+0.0625,0,1))"]#U.SU#
ActionTimer.StartAnimationLeft.End=
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

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
X=1
Y=R
W=(#DropdownSubMenuWidth#-(#DropdownNoIconPadding#*2)-#DropdownItemPadding1#+((#DropdownItemPadding1#-#DropdownNoIconPadding#)*#HideIcons#))
H=#DropdownItemHeight#
Text="%1"
FontWeight=#FontWeight#
Padding=#Padding0B#
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
ClipString=1
Group=Items
Container=AnimationContainer

[IconStyle]
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#DropdownIconGreyscale#
DynamicVariables=1
Group=Items

[CheckmarkStyle]
ImageTint=#DropdownFontColor1#
ImageName=#@#Icons\Fixed\#IconSize#\checkmark.png
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#DropdownIconGreyscale#
DynamicVariables=1
Group=Items

[ToggleStyle]
ImageTint=#DropdownFontColor1#
ImageName=#@#Icons\Fixed\#IconSize#\toggle.png
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#DropdownIconGreyscale#
DynamicVariables=1
Group=Items

[FolderStyle]
StringAlign=Right
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#SlideOpac2#)
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
X=(#DropdownSubMenuWidth#+1)
Y=R
W=(#DropdownSubMenuWidth#-3)
H=#DropdownItemHeight#
Text=❯
Padding=0,0,3,0
AntiAlias=#DropdownAntiAlias#
DynamicVariables=1
ClipString=1
Group=Folders

[BackgroundStyle]
LeftMouseDownAction=[]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[AnimationContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownSubMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimationSysSub#),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#)
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
DynamicVariables=1
Group=Animation.SU

; [AnimationContainer]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownSubMenuWidth#+2-(#DropdownMenuCutout#*2))*1),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#)
; Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
; DynamicVariables=1
; Group=Animation.SU

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownSubMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
UpdateDivider=-1
Container=AnimationContainer

;----------------------------------------------------
; Item highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=1
Group=Highlight | HL | Animation.HL
DynamicVariables=1
Hidden=1
Container=AnimationContainer

