[Variables]

[IconStyle]
Hidden=1

[MeasureCheckHeight]
Measure=Calc
IfCondition=(#SCREENAREAHEIGHT# <= 999)
IfTrueAction=[!SetOption 3Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 3Icon][!Redraw]
IfCondition2=(#SCREENAREAHEIGHT# > 1000) && (#SCREENAREAHEIGHT# < 1300)
IfTrueAction2=[!SetOption 5Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 5Icon][!Redraw]
IfCondition3=(#SCREENAREAHEIGHT# >= 1300) && (#SCREENAREAHEIGHT# < 1500)
IfTrueAction3=[!SetOption 7Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 7Icon][!Redraw]
IfCondition4=(#SCREENAREAHEIGHT# >= 1500) && (#SCREENAREAHEIGHT# < 2000)
IfTrueAction4=[!SetOption 8Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 8Icon][!Redraw]
IfCondition5=(#SCREENAREAHEIGHT# >= 2000)
IfTrueAction5=[!SetOption 9Icon ImageName "#@#Icons\Fixed\#IconSize#\star.png"][!UpdateMeterGroup 9Icon][!Redraw]
Disabled=((#DisplayIsLandscape#-1)*-1)
DynamicVariables=1

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
Y=(((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)+(#DropdownItemHeight#*10)+(#DividerSpace#*2))
MouseOverAction=[]
MouseLeaveAction=[]

[11Icon]
ImageAlpha=0

[StarIcon]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\#IconSize#\star.png
Y=[11:Y]
ImageAlpha=(#DropdownItemOpacity#/2)
Hidden=0
Group=None
