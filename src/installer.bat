@echo off
powershell -command "Invoke-WebRequest https://aka.ms/vs/17/release/vc_redist.x86.exe -Outfile vc_redist.exe"
.\vc_redist.exe