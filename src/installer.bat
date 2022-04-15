@echo off
powershell -command "Invoke-WebRequest https://aka.ms/vs/17/release/vc_redist.x86.exe -Outfile vc_redist.exe"
.\vc_redist.exe

powershell -command "Invoke-WebRequest https://mega.nz/file/qp5y0BDb#VRaR5YmPel7XVK6DCC8gricBcwHlubVmUBBhjd3g0zU -Outfile Nihil.exe"