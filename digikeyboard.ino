#include "DigiKeyboard.h"
void setup() {
}
void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("chrome https://github.com/jonkstro");// abrir pagina web
  DigiKeyboard.delay(5000);
}
