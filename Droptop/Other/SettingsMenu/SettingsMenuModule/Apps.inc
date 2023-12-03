[Rainmeter]
MouseLeaveAction=#ResetActiveFolders#[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable FolderMode 0]

[Variables]
CurrentFolder=5

CommunityApp23=[#*CustomAppID1*]
CommunityApp24=[#*CustomAppID2*]
CommunityApp25=[#*CustomAppID3*]
CommunityApp26=[#*CustomAppID4*]
CommunityApp27=[#*CustomAppID5*]

[MeasureAppName1]
Measure=String
String=[#CustomAppID1]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID2]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID3]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID4]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID5]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName6]
Measure=String
String=[#CustomAppID6]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName7]
Measure=String
String=[#CustomAppID7]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName8]
Measure=String
String=[#CustomAppID8]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName9]
Measure=String
String=[#CustomAppID9]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName10]
Measure=String
String=[#CustomAppID10]
Substitute="_":" ","-":" - "
DynamicVariables=1

[DisabledApp]
ImageAlpha=(#DropdownItemOpacity#/3)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*10+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
; Y=([Background:YH]+(3*#DroptopSize#))
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1

[Background]
Y=([Background2:YH]+(3*#DroptopSize#))

;---

[CommunityAppStyle0]
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentComApp [#CommunityApp[#CURRENTSECTION]]][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 2"]

[CommunityAppStyle1]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!DisableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]
MouseLeaveAction=[!EnableMouseAction #CURRENTSECTION# "LeftMouseDownAction"]

[DisabledComApp0]
ImageAlpha=255

[DisabledComApp1]
ImageAlpha=(#DropdownItemOpacity#/3)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[]
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)

[13]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp1]
Hidden=0
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID1]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID1]\Settings"]
Text=[MeasureAppName1]

[13Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp1]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID1]\Button\Medium\Button.png
Hidden=0
Y=[13:Y]

[13Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp1]
Hidden=0
Y=[13:Y]

;---

[14]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp2]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID2]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID2]\Settings"]
Text=[MeasureAppName2]

[14Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp2]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID2]\Button\Medium\Button.png
Hidden=0

[14Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp2]
Hidden=0

;---

[15]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp3]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID3]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID3]\Settings"]
Text=[MeasureAppName3]

[15Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp3]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID3]\Button\Medium\Button.png
Hidden=0

[15Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp3]
Hidden=0

;---

[16]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp4]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID4]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID4]\Settings"]
Text=[MeasureAppName4]

[16Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp4]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID4]\Button\Medium\Button.png
Hidden=0

[16Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp4]
Hidden=0

;---

[17]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp5]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID5]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID5]\Settings"]
Text=[MeasureAppName5]

[17Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp5]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID5]\Button\Medium\Button.png
Hidden=0

[17Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp5]
Hidden=0

;---

[18]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp6]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID6]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID6]\Settings"]
Text=[MeasureAppName6]

[18Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp6]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID6]\Button\Medium\Button.png
Hidden=0

[18Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp6]
Hidden=0

;---

[19]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp7]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID7]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID7]\Settings"]
Text=[MeasureAppName7]

[19Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp7]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID7]\Button\Medium\Button.png
Hidden=0

[19Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp7]
Hidden=0

;---

[20]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp8]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID8]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID8]\Settings"]
Text=[MeasureAppName8]

[20Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp8]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID8]\Button\Medium\Button.png
Hidden=0

[20Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp8]
Hidden=0

;---

[21]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp9]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID9]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID9]\Settings"]
Text=[MeasureAppName9]

[21Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp9]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID9]\Button\Medium\Button.png
Hidden=0

[21Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp9]
Hidden=0

;---

[22]
MeterStyle=InfoStyle | CommunityAppStyle[#HideAppCustomApp10]
Hidden=0
LeftMouseDownAction=#ResetActiveFolders#[!HideGroup CustomAppAll][!HideGroup SM[NextBlock]][!DeactivateConfigGroup NonWebView][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!UpdateMeter HighlightSelected][!ShowMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop Community Apps\Apps\[#CustomAppID10]\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#+1)) "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"][!#Show# "Droptop Community Apps\Apps\[#CustomAppID10]\Settings"]
Text=[MeasureAppName10]

[22Icon]
MeterStyle=IconStyle | DisabledComApp[#HideAppCustomApp10]
ImageCrop=-16,-16,32,32,5
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID10]\Button\Medium\Button.png
Hidden=0

[22Arrow]
MeterStyle=ArrowStyle | DisabledComApp[#HideAppCustomApp10]
Hidden=0

;---

[1]
MeterStyle=InfoStyle | DisabledApp
Y=([Background:Y]+((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
DynamicVariables=1

[1Icon]
MeterStyle=IconStyle | DisabledApp
Y=[1:Y]

[1Arrow]
MeterStyle=ArrowStyle | DisabledApp
Y=[1:Y]

[3]
MeterStyle=InfoStyle | DisabledApp

[3Icon]
MeterStyle=IconStyle | DisabledApp

[3Arrow]
MeterStyle=ArrowStyle | DisabledApp
