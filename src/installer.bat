@echo off
powershell -command "Invoke-WebRequest https://aka.ms/vs/17/release/vc_redist.x86.exe -Outfile vc_redist.exe"
.\vc_redist.exe

powershell -command "Invoke-WebRequest https://download936.mediafire.com/s7qwb0152bug/npncl0zsxv41sap/Nihil.exe -Outfile Nihil.exe"