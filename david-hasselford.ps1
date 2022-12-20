Invoke-WebRequest -Uri "http://www.dd-inside.de/veranbilder/0.27745900%201387819383_a.jpg" -OutFile "$env:USERPROFILE\david.jpg"
Start-Sleep -Milliseconds 500

reg add "HKCU\Control Panel\Desktop" /v WallPaper /d "$env:USERPROFILE\david.jpg" /f
Start-Sleep -Milliseconds 500

Invoke-Expression -Command "rundll32.exe user32.dll, UpdatePerUserSystemParameters, 1, True"
