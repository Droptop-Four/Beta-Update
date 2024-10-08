[Rainmeter]

@IncludeThemeOptions=#@#Themes\#SettingsMenuIndex#Settings.inc
; @IncludeThemeDesign=#@#Themes\#ThemeNum#.inc
@IncludeThemeDesign=#@#Themes\#SettingsMenuIndex#.inc

[Variables]

SettingsMenuNumber=1.2.1

IconImageName0=#@#Icons\Fixed\#IconSize#\Support.png
IconImageName1=#@#Icons\Fixed\#IconSize#\Checkmark.png

IconImage1=1
IconImage2=1
IconImage3=1
IconImage4=1
IconImage5=#Supporter#
IconImage6=#Supporter#
IconImage7=#Supporter#
IconImage8=#Supporter#
IconImage9=#Supporter#
IconImage10=#Supporter#
IconImage11=#Supporter#
IconImage12=#Supporter#
IconImage13=#Supporter#
IconImage14=#Supporter#
IconImage15=#Supporter#
IconImage16=#Supporter#
IconImage17=#Supporter#
IconImage18=#Supporter#
IconImage19=#Supporter#
IconImage20=#Supporter#
IconImage21=#Supporter#
IconImage22=#Supporter#

[MeasureSupporter]
Measure=Calc
IfCondition=(#Supporter#=0) && (#SettingsMenuIndex#>4) && (#SettingsMenuIndex#<23)
IfTrueAction=[!SetOption 1 Text "#SettingsUpdateText4#"][!SetOption 1 LeftMouseDownAction """["https://gumroad.com/l/droptop"]#*CloseSettingsMenu*#"""]
UpdateDivider=-1

[ThemeImageContainer]
Meter=Shape
Shape=Rectangle 0,0,((#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimation#),84,#DropdownBGCorner# | Fill Color 0,0,0,(255*#ActionTimer.StartAnimation#) | StrokeWidth 0
X=#DropdownMenuCutout#
Y=([Background:YH]+(#DropdownMenuCutout#+(2*#DroptopSize#))+1)
DynamicVariables=1
UpdateDivider=-1
Group=Animation.SU

[ThemeImage]
Meter=Image
ImagePath="#@#Images\ThemePreviews\"
ImageName=#SettingsMenuIndex#
Container=ThemeImageContainer
UpdateDivider=-1

[1Icon]
ImageName=[#IconImageName[#IconImage[#SettingsMenuIndex]]]