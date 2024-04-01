@echo "Transfering files from OneDrive to the local Documents folder... please wait..." & @echo off & robocopy "C:\Users\%USERNAME%\OneDrive\Documents\Rainmeter\Skins" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins" /NFL /NDL /NJH /NJS /nc /ns /np /e & timeout 1 & start "" %1 & exit

