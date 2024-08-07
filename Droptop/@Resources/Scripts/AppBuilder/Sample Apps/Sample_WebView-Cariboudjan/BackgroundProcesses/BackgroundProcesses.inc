[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------
; Usage tips:
; Measures in this file will be part of Droptop's BackgroundProcesses.ini file.
; As a result, #MyVariablesLoc# will not work here. Instead, use the actual file location.
; eg. "#SKINSPATH#Droptop Community Apps\Apps\APP_NAME-APP_AUTHOR\Variables\Variables.inc"
;----------------------------------------------------------------------

; [MeasureCPUTemp]
; Measure=Plugin
; Plugin=CoreTemp
; CoreTempType=Temperature
; CoreTempIndex=0
; OnChangeAction=[!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; UpdateDivider=10