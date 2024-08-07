[Rainmeter]

[Variables]
LanguageSelect=[!UpdateMeter ButtonText][!ShowMeterGroup Button][!SetOptionGroup Section0Buttons FillColor "Fill Color 255,255,255,15 | Stroke Color 63,63,63"][!SetOption [#*CURRENTSECTION*] FillColor "Fill Color #Lime2#,85 | Stroke Color #Lime2#"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Section0Buttons][!DisableMouseAction [#*CURRENTSECTION*] "MouseOverAction|MouseLeaveAction"][!UpdateMeterGroup Section0Buttons][!Redraw]

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
MaxItem=10

ScrollNum=0

ScrollType0=1
ScrollType1=#MaxItem#

ScrollPage0=Index
ScrollPage1=Page

ScrollValue=[#ScrollType[#ScrollNum]]

ScrollAmount=1

ScrollTracker=#MaxItem#
AboveTotal=1

ContentFade=1

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

LanguageSubstitutionA="(?is)EN-US":"1","(?is)EN-CA":"2","(?is)EN-GB":"3","(?is)TR-TR":"4","(?is)DE-DE":"5","(?is)NL-NL":"6","(?is)KO-KR":"7","(?is)RU-RU":"8","(?is)FR-FR":"9","(?is)PT-BR":"10","(?is)ES-ES":"11","(?is)IT-IT":"12","(?is)SK-SK":"13","(?is)AR-SA":"14","(?is)JA-JP":"15","(?is)PL-PL":"16","(?is)ID-ID":"17","(?is)LV-LV":"18","(?is)VI-VN":"19","(?is)FA-IR":"20","(?is)DA-DK":"21","(?is)CS-CZ":"22","(?is)UK-UA":"23","(?is)ES-MX":"24","(?is)HI-IN":"25","(?is)NO-NO":"26","(?is)ZH-CN":"27","(?is)EL-GR":"28"

LanguageSubstitutionB="(?is)EN-US":"EN-US | English  (United States)","(?is)EN-CA":"EN-CA | English  (Canada)","(?is)EN-GB":"EN-GB | English  (Britain)","(?is)TR-TR":"TR-TR | Türkçe  (Turkish)","(?is)DE-DE":"DE-DE | Deutsch  (German)","(?is)NL-NL":"NL-NL | Nederlands  (Dutch)","(?is)KO-KR":"KO-KR | 한국어  (Korean)","(?is)RU-RU":"RU-RU | Pусский  (Russian)","(?is)FR-FR":"FR-FR | Français  (French)","(?is)PT-BR":"PT-BR | Português  (Portuguese)","(?is)ES-ES":"ES-ES | Español  (Spanish)","(?is)IT-IT":"IT-IT | Italiano  (Italian)","(?is)SK-SK":"SK-SK | Slovenčina  (Slovak)","(?is)AR-SA":"AR-SA | اَلْعَرَبِيَّةُ  (Arabic)","(?is)JA-JP":"JA-JP | 日本語  (Japanese)","(?is)PL-PL":"PL-PL | Polski  (Polish)","(?is)ID-ID":"ID-ID | Bahasa Indonesia  (Indonesian)","(?is)LV-LV":"LV-LV | Latviešu  (Latvian)","(?is)VI-VN":"VI-VN | Tiếng Việt  (Vietnamese)","(?is)FA-IR":"FA-IR | فارسی  (Fārsi)","(?is)DA-DK":"DA-DK | Dansk  (Danish)","(?is)CS-CZ":"CS-CZ | Czech čeština  (Czech)","(?is)UK-UA":"UK-UA | Українська мова  (Ukrainian)","(?is)ES-MX":"ES-MX | Español  (Mexico)","(?is)HI-IN":"HI-IN | हिन्दी  (Hindi)","(?is)NO-NO":"NO-NO | Norsk  (Norwegian)","(?is)ZH-CN":"ZH-CN | 化字  (Chinese Simplified)","(?is)EL-GR":"EL-GR | Ellinika  (Greek)"

Lang1.Action=[!SetOption ButtonText Text "Continue"][!WriteKeyValue Variables UnitsMetric 0][!WriteKeyValue Variables UnitsMetric 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "New York, New York" "#@#GlobalVar\UserSettings.inc"]
Lang2.Action=[!SetOption ButtonText Text "Continue"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Toronto, Ontario" "#@#GlobalVar\UserSettings.inc"]
Lang3.Action=[!SetOption ButtonText Text "Continue"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "London, England" "#@#GlobalVar\UserSettings.inc"]
Lang4.Action=[!SetOption ButtonText Text "Devam et"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Istanbul" "#@#GlobalVar\UserSettings.inc"]
Lang5.Action=[!SetOption ButtonText Text "Weiter"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Berlin Germany" "#@#GlobalVar\UserSettings.inc"]
Lang6.Action=[!SetOption ButtonText Text "Doorgaan"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Amsterdam Netherlands" "#@#GlobalVar\UserSettings.inc"]
Lang7.Action=[!SetOption ButtonText Text "계속"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Seoul Korea" "#@#GlobalVar\UserSettings.inc"]
Lang8.Action=[!SetOption ButtonText Text "Продолжить"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Moscow Russia" "#@#GlobalVar\UserSettings.inc"]
Lang9.Action=[!SetOption ButtonText Text "Continuer"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Paris France" "#@#GlobalVar\UserSettings.inc"]
Lang10.Action=[!SetOption ButtonText Text "Continuar"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Lisbon Portugal" "#@#GlobalVar\UserSettings.inc"]
Lang11.Action=[!SetOption ButtonText Text "Continuar"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Madrid Spain" "#@#GlobalVar\UserSettings.inc"]
Lang12.Action=[!SetOption ButtonText Text "Continua"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Rome Italy" "#@#GlobalVar\UserSettings.inc"]
Lang13.Action=[!SetOption ButtonText Text "Pokračovať"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Bratislava Slovakia" "#@#GlobalVar\UserSettings.inc"]
Lang14.Action=[!SetOption ButtonText Text "استمر"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Riyadh Saudi Arabia" "#@#GlobalVar\UserSettings.inc"]
Lang15.Action=[!SetOption ButtonText Text "継続"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Tokyo Japan" "#@#GlobalVar\UserSettings.inc"]
Lang16.Action=[!SetOption ButtonText Text "Kontyntynuj"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Warsaw" "#@#GlobalVar\UserSettings.inc"]
Lang17.Action=[!SetOption ButtonText Text "Lanjut"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Jakarta" "#@#GlobalVar\UserSettings.inc"]
Lang18.Action=[!SetOption ButtonText Text "Turpināt"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Riga" "#@#GlobalVar\UserSettings.inc"]
Lang19.Action=[!SetOption ButtonText Text "Tiếp tục"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Ho Chi Minh City" "#@#GlobalVar\UserSettings.inc"]
Lang20.Action=[!SetOption ButtonText Text "ادامه"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Tehran" "#@#GlobalVar\UserSettings.inc"]
Lang21.Action=[!SetOption ButtonText Text "Blive ved"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Copenhagen" "#@#GlobalVar\UserSettings.inc"]
Lang22.Action=[!SetOption ButtonText Text "Pokračovat"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Prague" "#@#GlobalVar\UserSettings.inc"]
Lang23.Action=[!SetOption ButtonText Text "Далі"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Kyiv" "#@#GlobalVar\UserSettings.inc"]
Lang24.Action=[!SetOption ButtonText Text "Continuar"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Mexico City" "#@#GlobalVar\UserSettings.inc"]
Lang25.Action=[!SetOption ButtonText Text "जारी रखें"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "New Delhi" "#@#GlobalVar\UserSettings.inc"]
Lang26.Action=[!SetOption ButtonText Text "Fortsette"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Oslo" "#@#GlobalVar\UserSettings.inc"]
Lang27.Action=[!SetOption ButtonText Text "继续"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Hong Kong" "#@#GlobalVar\UserSettings.inc"]
Lang28.Action=[!SetOption ButtonText Text "Συνέχεια"][!WriteKeyValue Variables UnitsMetric 1][!WriteKeyValue Variables UnitsMetric 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Time24HourNum 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables StartMonday 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables WeatherLocation "Athens" "#@#GlobalVar\UserSettings.inc"]

[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!SetOptionGroup Items MouseScrollDownAction """[]"""]
IfFalseAction=[!SetOptionGroup Items MouseScrollDownAction ""]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!SetOptionGroup Items MouseScrollUpAction """[]"""]
IfFalseAction2=[!SetOptionGroup Items MouseScrollUpAction ""]
DynamicVariables=1

;----------------------------------------------------
; Measures
;----------------------------------------------------

[mPath]
Measure=Plugin
Plugin=FileView
Path="#@#GlobalVar\Languages"
ShowDotDot=0
SortType=Name
SortAscending=1
SortDateType=
ShowFile=1
ShowFolder=0
ShowSystem=0
ShowHidden=0
HideExtensions=1
;WildCardSearch="**"
;Recursive=0
Count=#MaxItem#
FinishAction=[!UpdateMeterGroup Items][!Redraw]

;----------------------------------------------------

[FileCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FileCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=0
RegExpFilter=(?i).*.*

[AnalyzeTotal]
Measure=Calc
Formula=FileCount

;----------------------------------------------------

; [ScrollTimer]
; Measure=Plugin
; Plugin=ActionTimer
; Group=Animation
; ActionList1=Start1|Wait 100|Start2|Wait 16|Repeat ContentFade,#W#,9|Wait 16|Finish
; Start1=
; Start2=
; ContentFade=[!SetVariable ContentFade "(Clamp(#ContentFade#+0.1,0,1))"]#U#
; Finish=[!SetVariable ContentFade 1]#U#
; DynamicVariables=1
; IgnoreWarnings=1

;----------------------------------------------------
; Name & Icon measures
;----------------------------------------------------

;----------------------------------------------------
; Index 1

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex1Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex2Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex3Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex4Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex5Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 6

[mIndex6Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionA#

[mIndex6Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 7

[mIndex7Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex7Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 8

[mIndex8Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex8Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 9

[mIndex9Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex9Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

;----------------------------------------------------
; Index 10

[mIndex10Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10
Substitute=#LanguageSubstitutionA#
RegExpSubstitute=1
DynamicVariables=1

[mIndex10Name.String]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10
RegExpSubstitute=1
DynamicVariables=1
Substitute=#LanguageSubstitutionB#

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Wait 250 | Start1 | Wait 800 | ClickOn | Custom1
Custom1=[!UnpauseMeasure loop][!Delay 1000][!SetOption Loop StartValue 0][!ClickThrough 0]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=1

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Optional1=Easing OutExpo
TweenGroup=Tweenable
UpdateDivider=1

[Loop]
Measure=Loop
Paused=1
StartValue=75
EndValue=600
LoopCount=0
UpdateDivider=1

[Morph:S]
StringAlign=Center
FontColor=255,255,255,((Clamp([Loop]-150*#CURRENTSECTION#,0,75*2))-75 < 0 ? (([Loop]-150*#CURRENTSECTION#)/75*255) : (255-([Loop]-150*#CURRENTSECTION#-75)/75*255))
UpdateDivider=1
DynamicVariables=1
X=r
Y=r

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TweenNode1#*255)
Group=Tweenable
DynamicVariables=1

[BackgroundImage]
Meter=String
MeterStyle=Image:BG
Text=[\xe903]

[Title]
Meter=String
Text=droptop four
X=(#SCREENAREAWIDTH#/2)
Y=(#SCREENAREAHEIGHT#/2-#SEc.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
StringAlign=Center
Container=
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S

; --------------------------------- Section 1 -------------------------------- ;

[000]
Meter=String
X=(#Sec.W#/2)
Y=(80*#Scale#)
Text=Choose a Language
FontSize=(22*#Scale#)
MeterStyle=String:S | Header:S | Morph:S

[001]
Meter=String
Text=Choisissez une langue
FontSize=(22*#Scale#)
MeterStyle=String:S | Header:S | Morph:S

[002]
Meter=String
Text=Wähle eine Sprache
FontSize=(22*#Scale#)
MeterStyle=String:S | Header:S | Morph:S

[003]
Meter=String
Text=選擇語言
FontSize=(22*#Scale#)
MeterStyle=String:S | Header:S | Morph:S

;------------------------------------------------------------------------
; ############################## SECTION 0 ##############################
;------------------------------------------------------------------------

[Section0ButtonStyle]
Shape=Rectangle 0,0,((#Sec.W#-#Sec.P#*6-30*#Scale#)/1.5),(45*#Scale#),(10*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
Shape2=Rectangle 0,(5*#Scale#),((#Sec.W#-#Sec.P#*6-30*#Scale#)/1.5),(40*#Scale#),(10*#Scale#) | StrokeWidth (2*#Scale#) | Extend FillColor
FillColor=Fill Color 255,255,255,15 | Stroke Color 63,63,63,255
LeftMouseDownAction=[#Lang[&mIndex[#CURRENTSECTION]Name].Action][!SetVariable LanguageNum [&mIndex[#CURRENTSECTION]Name]][!WriteKeyValue Variables LanguageNum [&mIndex[#CURRENTSECTION]Name]][!WriteKeyValue Variables LanguageNum [&mIndex[#CURRENTSECTION]Name] "#@#GlobalVar\UserSettings.inc"]#LanguageSelect#
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 63,63,63 | Stroke Color 63,63,63"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 255,255,255,15 | Stroke Color 63,63,63"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseScrollUpAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#ScrollValue#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#ScrollValue#)][!CommandMeasure mPath "[#ScrollPage[#ScrollNum]]Up"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!SetOptionGroup Section0Buttons FillColor "Fill Color 255,255,255,15 | Stroke Color 63,63,63"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Section0Buttons][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#ScrollValue#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#ScrollValue#)][!CommandMeasure mPath "[#ScrollPage[#ScrollNum]]Down"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!SetOptionGroup Section0Buttons FillColor "Fill Color 255,255,255,15 | Stroke Color 63,63,63"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Section0Buttons][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!Delay 10][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
X=r
Y=R
Container=Container
Group=Content | Section0Buttons | Section0 | Items

[Section0ButtonStyleB]
FillColor=Fill Color 255,255,255,5 | Stroke Color 43,43,43,0
MouseOverAction=[]
MouseLeaveAction=[]
Group=Content | Section0

; -------------------------------------

[1]
Meter=Shape
MeterStyle=Section0ButtonStyle
X=(#Sec.P#*6.43)
Y=(145*#Scale#)

[2]
Meter=Shape
MeterStyle=Section0ButtonStyle

[3]
Meter=Shape
MeterStyle=Section0ButtonStyle

[4]
Meter=Shape
MeterStyle=Section0ButtonStyle

[5]
Meter=Shape
MeterStyle=Section0ButtonStyle

[6]
Meter=Shape
MeterStyle=Section0ButtonStyle

[7]
Meter=Shape
MeterStyle=Section0ButtonStyle

[8]
Meter=Shape
MeterStyle=Section0ButtonStyle

[9]
Meter=Shape
MeterStyle=Section0ButtonStyle

[10]
Meter=Shape
MeterStyle=Section0ButtonStyle

; ; -------------------------------------


[Section0StringStyle]
MeasureName=mIndex[##CURRENTSECTION#]Name.String
StringAlign=LeftCenter
FontFace=Urbanist
FontColor=255,255,255,200
FontSize=(15*#Scale#)
ClipString=2
AntiAlias=1
InlinePattern=\(.*\)
InlineSetting=Color | 255,255,255,85
InlinePattern2="..-.. \| "
InlineSetting2=Face | Fira Code
InlinePattern3="\| "
InlineSetting3=Color | 255,255,255,35
W=([[##CURRENTSECTION#]:W]-(30*#Scale#))
H=[[##CURRENTSECTION#]:H]
X=([[##CURRENTSECTION#]:X]+(15*#Scale#)-((#SCREENAREAWIDTH#/2-#Sec.W#/2)))
Y=([[##CURRENTSECTION#]:Y]+([[##CURRENTSECTION#]:H]/2)-((#SCREENAREAHEIGHT#/2-#Sec.H#/2))+(2.5*#Scale#))
ClipString=1
DynamicVariables=1
Container=Container
Group=Content | Section0

[Section0StringStyleB]
StringEffect=None
FontColor=255,255,255,85

[1String]
Meter=String
MeterStyle=Section0StringStyle

[2String]
Meter=String
MeterStyle=Section0StringStyle

[3String]
Meter=String
MeterStyle=Section0StringStyle

[4String]
Meter=String
MeterStyle=Section0StringStyle

[5String]
Meter=String
MeterStyle=Section0StringStyle

[6String]
Meter=String
MeterStyle=Section0StringStyle

[7String]
Meter=String
MeterStyle=Section0StringStyle

[8String]
Meter=String
MeterStyle=Section0StringStyle

[9String]
Meter=String
MeterStyle=Section0StringStyle

[10String]
Meter=String
MeterStyle=Section0StringStyle

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollbarTop]
Meter=Image
X=(#SEc.P#*18.7)
Y=(150*#Scale#)
UpdateDivider=-1
Group=ScrollBar | Items
Container=Container

[Size]
Measure=Calc
Formula=((45*#Scale#)*#MaxItem#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
Group=Scrollbar

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(10*#Scale#),([ScrollH]<1?1:[ScrollH]),(5*#Scale#) | Fill Color 255,255,255,155 | StrokeWidth 0 | StrokeColor 255,255,255,55
X=(#SEc.P#*18.7)
Y=(150*#Scale#)
DynamicVariables=1
Group=ScrollBar | Items
Container=Container

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=(#Sec.W#/2-90*#Scale#)
Y=(#SEc.H#-#Sec.P#-25*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#ExecuteAnimation[#NoAnimationNum]]
Group=Button
Hidden=1
Container=Container

[ButtonText]
Meter=String
Text=Continue
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
Group=Button
Hidden=1
MeterStyle=String:S