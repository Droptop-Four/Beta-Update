[Variables]
TopBarFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
TopBarContentXOffset=((13*#DroptopSize#)-((13*#DroptopSize#)%1))
TopBarTitlePadding=((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((1*#DroptopSize#)+(#FontYposOffset#*#DroptopSize#))
TopBarSysBatteryIconOffset=(3*#DroptopSize#)
TopBarSysBatteryTextOffset=(9*#DroptopSize#)
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=1
TopBarBorderTopH=(0*#DroptopSize#)
TopBarBorderBottomH=0
TopBarHLOffsetY=(11*#DroptopSize#)
TopBarHLOffsetH=(16*#DroptopSize#)
TopBarSkew=(-20*#TopBarHLSkew#)
TopBarIconHOffset=((-12*#DroptopSize#)+(#IconSizeOffset#*#DroptopSize#))
TopBarSectionSpacingX=(((27*#DroptopSize#)-((27*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=(((1*#DroptopSize#)-((1*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionPadding=(((10*#DroptopSize#)-((10*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(2*#DroptopSize#)
TopBarBlurCutout=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarGradientCutout=#TopBarCutout#
TopBarStrokeWidth=(1*#DroptopSize#)
TopBarDividerSpace=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(-4*#DroptopSize#)
TopBarShadowOffsetX=(2*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((330*#DroptopSize#)-((330*#DroptopSize#)%1))
DropdownItemHeight=((28*#DroptopSize#)-((28*#DroptopSize#)%1))
DropdownItemFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(12*#DroptopSize#)
DropdownIconYoffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownItemYOffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownItemPadding1=(42*#DroptopSize#)
DropdownItemPadding2=(20*#DroptopSize#)
DropdownItemPaddingY=((1+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=(240*#DroptopSize#)
DropdownContextMenuYOffset=(0*#DroptopSize#)
DropdownStrokeWidth=(3*#DroptopSize#)
DropdownHLStrokeWidth=0
DropdownSysAppContentXOffset=(0*#DroptopSize#)
DropdownArrowHighlightW=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownArrowXOffset=((-3*#DroptopSize#)+(#DropdownMenuCutout#%1))
DropdownArrowXOffsetTray=((-3*#DroptopSize#)+(#DropdownMenuCutout#%1))
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(5*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=136,157,210
ChamBG2=153,169,211
ChamBG3=206,206,219
ChamFG1=34,40,54
ChamFG2=34,40,54

TopBarSolidColor=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=1
LockReverseDarkLightDropdownMenu=1
LockTopBarShadowNum=1

;---
; ColorMode/Charging/BatteryLow/BatterySaver
BatteryFillColor0000=[#*TopBarFontColor1*]
BatteryFillColor0010=[#*TopBarFontColor1*]
BatteryFillColor0100=[#*TopBarFontColor1*]
BatteryFillColor0110=[#*TopBarFontColor1*]

BatteryFillColor1000=[#*TopBarFontColor1*]
BatteryFillColor1010=[#*BatteryDyingColor*]
BatteryFillColor1100=[#*BatteryChargingColor*]
BatteryFillColor1110=[#*BatteryDyingColor*]

BatteryFillColor0001=[#*TopBarFontColor1*]
BatteryFillColor0011=[#*TopBarFontColor1*]
BatteryFillColor0101=[#*TopBarFontColor1*]
BatteryFillColor0111=[#*TopBarFontColor1*]

BatteryFillColor1001=[#*BatterySaverColor*]
BatteryFillColor1011=[#*BatterySaverColor*]
BatteryFillColor1101=[#*BatteryChargingColor*]
BatteryFillColor1111=[#*BatteryChargingColor*]

;---

BatteryFillColor0000B=[#*TopBarFontColor2*]
BatteryFillColor0010B=[#*TopBarFontColor2*]
BatteryFillColor0100B=[#*TopBarFontColor2*]
BatteryFillColor0110B=[#*TopBarFontColor2*]

BatteryFillColor1000B=[#*TopBarFontColor2*]
BatteryFillColor1010B=[#*BatteryDyingColor*]
BatteryFillColor1100B=[#*BatteryChargingColor*]
BatteryFillColor1110B=[#*BatteryDyingColor*]

BatteryFillColor0001B=[#*TopBarFontColor2*]
BatteryFillColor0011B=[#*TopBarFontColor2*]
BatteryFillColor0101B=[#*TopBarFontColor2*]
BatteryFillColor0111B=[#*TopBarFontColor2*]

BatteryFillColor1001B=[#*BatterySaverColor*]
BatteryFillColor1011B=[#*BatterySaverColor*]
BatteryFillColor1101B=[#*BatteryChargingColor*]
BatteryFillColor1111B=[#*BatteryChargingColor*]

;-------------------------
; Opacities

BatteryFillOpacity=355

;-------------------------
; Shapes & backgrounds

DividerX=(10*#DroptopSize#)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(2*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0

HomeShape=Rectangle [#*TopBarContentXOffset*],([#*TopBarHLOffsetH*]+[#*TopBarHLOffsetY*]),[Home:W],([#*TopHeight*]-([#*TopBarCutout*]*2)-([#*TopBarHLOffsetH*]*2)),[#*TopBarHighlightCorner*] | StrokeWidth 0 | Stroke Color [#*TopBarBGColor1*] | Skew [#*TopBarSkew*],0 | Extend HomeFillColor[#*TopBarHomeShape*]

TopBarBlurType=[#BlurType[#BlurTypeNum]]

CurrentDayStrokeWidth=(2*#DroptopSize#)

TopBarHotCornerStrokeWidth=0

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings

ChamTopBarBGColor1=23,23,28
ChamTopBarBGColor2=23,23,28
ChamTopBarBGColor3=23,23,28
ChamDropdownBGColor1=23,23,28
ChamFolderHL=255,248,255
ChamTopBarHL=255,248,255
ChamDropdownFontColor1=224,223,230
ChamDropdownFontColor2=224,223,230
ChamTopBarFontColor1=224,223,230
ChamTopBarFontColor2=224,223,230
ChamDropdownStrokeColor=255,90,90,255
ChamTopBarStrokeColor=255,90,90
ChamTopBarHomeIconColor=224,223,230
ChamTopBarAssistantIconTint1=35,37,42
ChamTopBarAssistantIconTint2=255,255,255
ChamBatteryFillColor=#ChamTopBarFontColor1#
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------

MyThemeGUID=60fed712-5d32-45f4-9c3d-6a103057c81a
