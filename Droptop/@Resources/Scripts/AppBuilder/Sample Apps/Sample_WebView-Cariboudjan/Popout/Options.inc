[Rainmeter]
Group=None
SkinWidth=
SkinHeight=
LeftMouseDownAction=
OnCloseAction=[!WriteKeyValue Variables PopoutZpos 1][!Zpos 1]
OnFocusAction=#HideAll#[!HideFadeGroup WebView]

DefaultWindowX=#TopHeight#
DefaultWindowY=(#TopHeight#*2)
DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=0
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=0
DefaultAutoSelectScreen=1

[Variables]
XIcon=1
PinIcon=2

[ActionIconStyle]
X=-[#CURRENTSECTION#:W]r
SolidColor=0,0,0,0

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1
LeftMouseDownAction=
