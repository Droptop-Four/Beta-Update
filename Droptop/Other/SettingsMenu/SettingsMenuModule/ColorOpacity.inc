[Rainmeter]

[Variables]

SetChangesAction=

[CheckSetColorByWallpaperOFF]
Measure=Calc
IfCondition=#LockSetColorByWallpaperOFF#=1
IfTrueAction=[!SetOption 1 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 1Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 1Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!DisableMouseAction 1 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
IfCondition2=#SetColorByWallpaperOFF#=0
IfTrueAction2=[!EnableMouseActionGroup * ReverseOption][!DisableMouseActionGroup * ColorOption][!HideMeter HighlightSelected][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOption ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup F9 FillColor "Fill Color [#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!UpdateMeterGroup ColorOption][!Redraw]
IfFalseAction2=[!DisableMouseActionGroup * ReverseOption][!EnableMouseActionGroup * ColorOption][!EnableMouseAction FolderBlock *][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup F9 FillColor "Fill Color [#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!UpdateMeterGroup ColorOption][!Redraw]
IfCondition3=#LockColorReset#=1
IfTrueAction3=[!SetOption 10 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 10Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 10Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!DisableMouseAction 10 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
UpdateDivider=-1
IfConditionMode=1
DynamicVariables=1

[InfoStyleB]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]

[FolderBlock]
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*1)+(#DividerSpace#*2))
Group=ColorOption

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[2Icon]
Y=(#DividerSpace#*2)R
ImageTint=#TopBarBGColor1#

[2Arrow]
Y=(#DividerSpace#*2)R

[3]
MeterStyle=InfoStyle | InfoStyleB
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[3Icon]
ImageTint=#TopBarFontColor1#

[4]
MeterStyle=InfoStyle | InfoStyleB
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[4Icon]
ImageTint=#DropdownBGColor1#

[5]
MeterStyle=InfoStyle | InfoStyleB
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[5Icon]
ImageTint=#DropdownFontColor1#

[6]
MeterStyle=InfoStyle | InfoStyleB
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[6Icon]
ImageTint=#TopBarHLColor1#

[7]
MeterStyle=InfoStyle | InfoStyleB
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[7Icon]
ImageTint=#TopBarFontColor2#

[8]
MeterStyle=InfoStyle | InfoStyleB
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[8Icon]
ImageTint=#DropdownItemHL#

[9]
MeterStyle=InfoStyle | InfoStyleB
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[9Icon]
ImageTint=#DropdownFontColor2#

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*9)-(#DividerHeight#/2))

[10]
MeterStyle=InfoStyle
Y=(#DividerSpace#*2)R

[10Icon]
Y=(#DividerSpace#*2)R

; [99Style]
; LeftMouseDownAction=[]
; MouseOverAction=[]
; MouseLeaveAction=[]

; [99Style]
; LeftMouseDownAction=[]
; MouseOverAction=[]
; MouseLeaveAction=[]

; [9]
; MeterStyle=InfoStyle | #ThemeNum#Style
; Y=(#DividerSpace#*2)R
; FontColor=#DropdownFontColor1#,(#ThemeNum#=99?([#DropdownItemOpacity]/3):[#DropdownItemOpacity])

; [9Icon]
; Y=(#DividerSpace#*2)R

[1Arrow]
Shape=

[9Arrow]
Hidden=0