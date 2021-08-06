#include "DigiKeyboard.h"
#include <TinyWireS.h>
// By Mark Balliet <posicat@pobox.com>

/*
   handy websites:
   https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf (CHAPTER 10)
   https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboard.h
*/

#define I2C_SLAVE_ADDRESS 10
//#define LED 1

void setup() {
  //pinMode(LED, OUTPUT);
  TinyWireS.begin(I2C_SLAVE_ADDRESS);
  TinyWireS.onReceive(receiveEvent);
  TinyWireS.onRequest(requestEvent);
  DigiKeyboard.sendKeyStroke(0);        //to connect right after disconnection
}

void loop() {
  tws_delay(1000);
}

void receiveEvent(uint8_t howMany) {
  byte operation;
  byte content[128];
  byte j = 0;

  if (howMany < 1) {
    return;  // Sanity-check
  }
  //digitalWrite(LED, HIGH);

  operation = TinyWireS.read();

  howMany--;
  while (howMany--) {
    content[j] = TinyWireS.read();
    j++;
  }
  KeyboardAction(operation, content, j);
  //digitalWrite(LED, LOW);
}

void requestEvent() {
  TinyWireS.write(255);
}

/*
   operations:

   p = Print text
   k = single keystroke
   m = multiple keystrokes

*/
void KeyboardAction(char operation, byte content[], int j) {
  DigiKeyboard.update();

  if (operation == 'p') { //p = print text
    int k = 0;
    while (j != 0) {
      DigiKeyboard.print(content[k]);
      k++;
      j--;
    }
  }
  else if (operation == 'k') {                    //k = single keystoke

    if (content[0] < 224 || content[0] > 231) { //if content[0] is not a "MOD_" key
      DigiKeyboard.sendKeyStroke(content[0]);
    }
    else { //else if it is a "MOD_"
      int x = content[0] - 224;
      DigiKeyboard.sendKeyStroke(0, 1 << x);
    }
  }
  else if (operation == 'm') { //m = multiple keystrokes
    byte Keys[6] = {};               //special syntax : first 3 bytes are "Keys" and bytes 4-6 are "Mod_Keys"
    for (int i = 0; i < 6; i++) {   //Master has to send 0's on "Keys" and 8's on "Mod_keys", that aren't used
      Keys[i] = content[i];         //Example: 22,0,0,3,5,8 -> S + winKey + Shift
    }

    //this function can handle only up to 3 Keys and 3 Mod_keys
    DigiKeyboard.sendKeyStroke(Keys[0], Keys[1] | Keys[2] | 1 << Keys[3] | 1 << Keys[4] | 1 << Keys[5]);
    DigiKeyboard.sendKeyStroke(0);
  }
}
