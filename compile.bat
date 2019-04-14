@echo off
cls
color 0a

echo   "######################################"
echo   "#    ( )   MASSAOUDI.YASS@GMAIL.COM  #"
echo   "#  ___|___                           #"
echo   "# /{     }\                          #"
echo   "#  {     }       ELMASSAOUDI         #"
echo   "#  {     }       YASSINE             #"
echo   "# /       \                          #"
echo   "#/         \                         #"
echo   "#                                    #"
echo   "######################################"
echo Deleting old file...
del calc.exe
echo compilation started
gcc .\main.c -o calc.exe

echo compilation finished
echo cleaning screen...
cls
echo script by YASSINE
echo starting program
.\calc.exe

