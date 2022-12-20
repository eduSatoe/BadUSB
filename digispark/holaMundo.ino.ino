#define LAYOUT_SPANISH
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(3000);


  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("notepad");
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("Hello Workd!!!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
