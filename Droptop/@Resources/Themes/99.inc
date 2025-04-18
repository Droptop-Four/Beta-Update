[Variables]
TopBarFontSize=((9*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
TopBarContentXOffset=(#TopBarSections#=1?((7*#DroptopSize#)-((7*#DroptopSize#)%1)):((10*#DroptopSize#)-((10*#DroptopSize#)%1)))
TopBarTitlePadding="((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),((0.5*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0"
TopBarTextYOffset=((1*#DroptopSize#)+(#FontYposOffset#*#DroptopSize#))
TopBarSysBatteryIconOffset=(0*#DroptopSize#)
TopBarSysBatteryTextOffset=(0*#DroptopSize#)
TopBarSysTextYPadding=((1*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=1
TopBarBorderTopH=0
TopBarBorderBottomH=(0*#DroptopSize#)
TopBarHLOffsetY=(2*#DroptopSize#)
TopBarHLOffsetH=(3*#DroptopSize#)
TopBarSkew=(-20*#TopBarHLSkew#)
TopBarIconHOffset=((-18*#DroptopSize#)+(#IconSizeOffset#*#DroptopSize#))
TopBarSectionSpacingX=(((20*#DroptopSize#)-((20*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((0*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((3*#DroptopSize#)-((3*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(2*#DroptopSize#)
TopBarBlurCutout=(4*#DroptopSize#)
TopBarGradientCutout=#TopBarCutout#
TopBarStrokeWidth=(2*#DroptopSize#)
TopBarDividerSpace=((10*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(-4*#DroptopSize#)
TopBarShadowOffsetX=(5*#DroptopSize#)
TopBarShadowOffsetY=(5*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((300*#DroptopSize#)-((300*#DroptopSize#)%1))
DropdownItemHeight=((34*#DroptopSize#)-((34*#DroptopSize#)%1))
DropdownItemFontSize=((9*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
DropdownMenuYOffset=(10*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(5*#DroptopSize#)
DropdownIconYoffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownItemPadding1=(35*#DroptopSize#)
DropdownItemPadding2=(35*#DroptopSize#)
DropdownItemPaddingY=((1+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=(200*#DroptopSize#)
DropdownContextMenuYOffset=(10*#DroptopSize#)
DropdownStrokeWidth=(2*#DroptopSize#)
DropdownHLStrokeWidth=0
DropdownSysAppContentXOffset=(10*#DroptopSize#)
DropdownArrowHighlightW=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownArrowXOffset=(0*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(-2*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(10*#DroptopSize#)
DropdownMenuCutout=(2*#DroptopSize#)
DropdownHLOffsetX=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownMenuLandingHeight=(24*#DroptopSize#)
DropdownNoIconPadding=((10*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=160,170,172
ChamBG2=179,185,189
ChamBG3=159,166,172
ChamFG1=40,42,43
ChamFG2=40,42,43

TopBarSolidColor=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=1

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
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

DividerX=(#DropdownStrokeWidth#*2+(10*#DroptopSize#))
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,(255/2) | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0

HomeShape=Rectangle [#*TopBarContentXOffset*],([#*TopBarHLOffsetH*]+[#*TopBarHLOffsetY*]),[Home:W],([#*TopHeight*]-([#*TopBarCutout*]*2)-([#*TopBarHLOffsetH*]*2)),[#*TopBarHighlightCorner*] | StrokeWidth 0 | Stroke Color [#*TopBarBGColor1*] | Skew [#*TopBarSkew*],0 | Extend HomeFillColor[#*TopBarHomeShape*]

TopBarBlurType=[#BlurType[#BlurTypeNum]]

MicaAvailable=0

CurrentDayStrokeWidth=(2*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings

ChamTopBarBGColor1=42,42,54
ChamTopBarBGColor2=42,42,54
ChamTopBarBGColor3=42,42,54
ChamDropdownBGColor1=40,42,54
ChamFolderHL=68,71,90
ChamTopBarHL=56,58,68
ChamDropdownFontColor1=248,248,242
ChamDropdownFontColor2=173,173,216
ChamTopBarFontColor1=248,248,242
ChamTopBarFontColor2=173,173,216
ChamDropdownStrokeColor=68,71,90,255
ChamTopBarStrokeColor=68,71,90
ChamTopBarHomeIconColor=248,248,242
ChamTopBarAssistantIconTint1=255,255,255
ChamTopBarAssistantIconTint2=0,0,0
ChamBatteryFillColor=255,255,255
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------

MyThemeGUID=82bc4f94-5bf6-440f-9c16-9e0774984ae6
