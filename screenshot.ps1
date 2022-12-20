Add-Type -Assembly System.Windows.Forms
Start-Sleep -Milliseconds 500
Add-Type -AssemblyName System.Drawing
Start-Sleep -Seconds 1

$jpegCodec = [Drawing.Imaging.ImageCodecInfo]::GetImageEncoders() | 
Where-Object { $_.FormatDescription -eq "JPEG" }
Start-Sleep -Seconds 1


(New-Object -ComObject shell.application).toggleDesktop()
Start-Sleep -seconds 1
[Windows.Forms.Sendkeys]::SendWait("{PrtSc}")   


Start-Sleep -Milliseconds 500
$bitmap = [Windows.Forms.Clipboard]::GetImage()    
$ep = New-Object Drawing.Imaging.EncoderParameters  
$ep.Param[0] = New-Object Drawing.Imaging.EncoderParameter ([System.Drawing.Imaging.Encoder]::Quality, [long]100)  
$screenCapturePathBase = "$env:USERPROFILE\"
$c = 0
while (Test-Path "${screenCapturePathBase}${c}.jpg") {
    $c++
}
$bitmap.Save("${screenCapturePathBase}${c}.jpg", $jpegCodec, $ep)


Write-Output "${screenCapturePathBase}${c}.jpg"
Start-Sleep -Seconds 1


# put the wallpaper
reg add "HKCU\Control Panel\Desktop" /v WallPaper /d "${screenCapturePathBase}${c}.jpg" /f
Invoke-Expression -Command "rundll32.exe user32.dll, UpdatePerUserSystemParameters, 1, True"
Start-Sleep -Seconds 1


$Path = "HKCU:\Software\Microsoft\Windows\CurrentVersion\Explorer\Advanced"
Set-ItemProperty -Path $Path -Name "HideIcons" -Value 1
Get-Process "explorer" | Stop-Process
