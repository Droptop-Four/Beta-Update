[Rainmeter]

[Variables]
@IncludeFolderSettings=#@#GlobalVar\FolderSettings.inc
@IncludeTopBarPositions=#@#GlobalVar\TopBarPos.inc

SettingsMenuNumber=1.5.1

SettingsDirectoryCopy3=#HomeItem1# >> [##SettingsDirectory1#] >> 📁

LabelColor.1=1
LabelColor.2=2
LabelColor.3=3
LabelColor.4=4
LabelColor.5=5
LabelColor.6=6
LabelColor.7=7
LabelColor.8=8

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
MouseOverAction=[]
Y=(#DividerSpace#*2)R

[LabelColorStyle]
Shape=Rectangle 0,(((#DropdownItemHeight#-(#DropdownItemHeight#/1.5))/2)-1),(#DropdownItemHeight#/1.5),(#DropdownItemHeight#/1.5),(#DropdownItemHeight#/3) | StrokeWidth 2 | Stroke Color [#TopBarLabelColor[##CURRENTSECTION#]],100 | Extend FillColor
FillColor=Fill Color [#TopBarLabelColorBG[##CURRENTSECTION#]],255
LeftMouseDownAction=[!SetVariable FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 1][!SetVariable FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[##CURRENTSECTION#]"][!SetVariable FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 1 "Droptop\DropdownBar"][!SetVariable FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[#FolderColorNum[#SlotFolder[#SettingsMenuIndex2]]]" "Droptop\DropdownBar"]                                 [!SetOption TopBar LabelColor[#SettingsMenuIndex2] "Fill Color [#TopBarLabelColorBG[##CURRENTSECTION#]],((([#*TopBarTitleOpacity*]*1)*1)*(([#FolderHidden[#*SlotFolder[#SettingsMenuIndex2]*]]-1)*-1))" "Droptop\DropdownBar"]                                    [!WriteKeyValue Variables FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[#FolderColorNum[#SlotFolder[#SettingsMenuIndex2]]]" "#@#GlobalVar\UserSettings.inc"][!UpdateMeter TopBar "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!UpdateMeterGroup Folders "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseActionCursor=1
W=(30*#DroptopSize#)
X=(5*#DroptopSize#)R
Y=r
Container=AnimationContainer

[LabelColor.1]
Meter=Shape
MeterStyle=LabelColorStyle
Shape=Rectangle 0,(((#DropdownItemHeight#-(#DropdownItemHeight#/1.5))/2)-1),(#DropdownItemHeight#/1.5),(#DropdownItemHeight#/1.5),(#DropdownItemHeight#/3) | StrokeWidth 2 | Stroke Color #DropdownFontColor1#,155 | Fill Color #DropdownBGColor1#,25
X=(#DropdownIconXoffset#+(5*#DroptopSize#))
Y=([Divider1:Y]+(#DividerSpace#*1))
LeftMouseDownAction=[!SetVariable FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 0][!SetVariable FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[##CURRENTSECTION#]"][!SetVariable FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 0 "Droptop\DropdownBar"][!SetVariable FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[#FolderColorNum[#SlotFolder[#SettingsMenuIndex2]]]" "Droptop\DropdownBar"]                                       [!SetOption Folder[#SettingsMenuIndex2] InlineSetting3 "" "Droptop\DropdownBar"][!SetOption TopBar LabelColor[#SettingsMenuIndex2] "Fill Color [#TopBarLabelColorBG[##CURRENTSECTION#]],((([#*TopBarTitleOpacity*]*1)*1)*(([#FolderHidden[#*SlotFolder[#SettingsMenuIndex2]*]]-1)*-1))" "Droptop\DropdownBar"]                 [!WriteKeyValue Variables FolderIsColor[#SlotFolder[#SettingsMenuIndex2]] 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables FolderColorNum[#SlotFolder[#SettingsMenuIndex2]] "[#FolderColorNum[#SlotFolder[#SettingsMenuIndex2]]]" "#@#GlobalVar\UserSettings.inc"][!UpdateMeter TopBar "Droptop\DropdownBar"][!UpdateMeterGroup Folders "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

[LabelColor.2]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.3]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.4]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.5]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.6]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.7]
Meter=Shape
MeterStyle=LabelColorStyle

[LabelColor.8]
Meter=Shape
MeterStyle=LabelColorStyle
