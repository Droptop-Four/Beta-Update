[Rainmeter]

[Variables]
NumberOfItems=4
NumberOfDividers=1

[PrepareLyricsSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]   [#PlayerTitle[#PlayerTypeNum]] lyrics
Substitute="&":"and",'"':""," -  lyrics":""
DynamicVariables=1

[PrepareWikiSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]
Substitute="&":"and",'"':""," ":"+"
DynamicVariables=1

[1]
Text=#PopupMenuFolders1#
LeftMouseDownAction=[!Hide][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]["[#FolderLoc[#PopupModuleIndex2]]"]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\folder.png

[2]
Text=#PopupMenuFolders2#
LeftMouseDownAction=[!Hide][!WriteKeyValue Variables CycleFolder [#PopupModuleIndex2] "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\ToggleFolders.ini"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "ToggleFolders.ini"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\refresh.png

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*2)+(#DividerSpace#*2))r

;---

[3]
Text=#PopupMenuFolders3#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "Properties" "Droptop\Other\Folders\Folder[#PopupModuleIndex2]"]"]
Y=(#DropdownItemHeight#/2)R

[3Icon]
ImageName=#@#Icons\Fixed\#IconSize#\type.png
Y=(#DropdownIconYoffset#+((#DropdownItemHeight#*2)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)

[4]
Text=#PopupMenuFolders4#
LeftMouseDownAction=[!Hide][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "ContextMenu" "Droptop\Other\Folders\Folder[#PopupModuleIndex2]"]

[4Icon]
ImageName=#@#Icons\Fixed\#IconSize#\list.png

;dummy
[1Arrow]
Meter=String
Hidden=1

[2Arrow]
Meter=String
Hidden=1

[3Arrow]
Meter=String
Hidden=1