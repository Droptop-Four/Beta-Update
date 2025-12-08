; [AutoStartup]
; Measure=Calc
; Formula=Counter
; IfCondition=(AutoStartup=1)
; IfTrueAction=[!Zpos 1][!Zpos #PopoutZpos#][!SetVariable DropdownMenuWidth.#AppName# (#DropdownMenuWidth#+#DropdownMenuWidthOffset#) "Droptop\DropdownBar"][!WriteKeyValue Variables DropdownMenuWidth.CustomApp#CustomAppPosition# (#*DropdownMenuWidth*#+#DropdownMenuWidthOffset#) "#SKINSPATH#Droptop\DropdownBar\DropdownBar.ini"]
; OnUpdateAction=[!Zpos 1]
; DynamicVariables=1
; UpdateDivider=-1

[AutoStartup]
Measure=Calc
Formula=[#DropdownMenuWidth.[#AppName]]
IfCondition=1=1
IfTrueAction=[!Zpos 1][!Zpos #PopoutZpos#]
OnUpdateAction=[!Zpos 1]
DynamicVariables=1
UpdateDivider=-1