/*
   handy websites

   ATtiny85:
   https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf (CHAPTER 10)
   https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboard.h

   ESP8266:
   https://tttapa.github.io/ESP8266/Chap10%20-%20Simple%20Web%20Server.html
   https://en.wikipedia.org/wiki/List_of_HTTP_status_codes
*/

byte POSTargToByte(String message) {
  byte content[2];
  for (int i = 0; i < message.length(); i++) {
    content[i] = byte(message[i]) - 48;
    if (i != 0) {
      content[0] = content[0] * 10 + content[i];
    }
  }
  return content[0];
}

void handleVyber() {

  //searching for the defined POST arg.
  if (server.hasArg("SingleKeystroke")) {
    //server.send(200, "text/html", "<h1>You have hit a keystroke</h1><p>your keystoke was: " + server.arg("SingleKeystroke") + "</p>");
    server.sendHeader("Location", "/");
    server.send(303);

    byte keyStrokeByte = POSTargToByte(server.arg("SingleKeystroke"));

    //transmitting keystroke
    Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
    Wire.write("k");             // define "k" - single Keystroke
    Wire.write(keyStrokeByte);
    Wire.endTransmission();      // stop transmitting
  }

  else if (server.hasArg("InputBoxPrintln")) {
    //server.send(200, "text/html", "<h1>You have written</h1><p>" + server.arg("InputBoxPrintln") + "</p>");
    server.sendHeader("Location", "/");
    server.send(303);

    char buffer[128];
    server.arg("InputBoxPrintln").toCharArray(buffer, 128);

    //transmitting text
    Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
    Wire.write("p");             // define "p" - print text
    Wire.write(buffer);
    Wire.endTransmission();      // stop transmitting
  }

  else if (server.hasArg("MultipleKeystrokes1")) {

    server.sendHeader("Location", "/");
    server.send(303);

    byte keyStrokeByte1 = POSTargToByte(server.arg("MultipleKeystrokes1"));
    byte keyStrokeByte2 = POSTargToByte(server.arg("MultipleKeystrokes2"));
    byte keyStrokeByte3 = POSTargToByte(server.arg("MultipleKeystrokes3"));
    byte modKeyByte1 = POSTargToByte(server.arg("ModKeys1"));
    byte modKeyByte2 = POSTargToByte(server.arg("ModKeys2"));
    byte modKeyByte3 = POSTargToByte(server.arg("ModKeys3"));

    if (keyStrokeByte1 == 0) {
      if (keyStrokeByte2 != 0) {
        keyStrokeByte1 = keyStrokeByte2;
        keyStrokeByte2 = 0;
      }
      else if (keyStrokeByte3 != 0) {
        keyStrokeByte1 = keyStrokeByte3;
        keyStrokeByte3 = 0;
      }
    }

    //transmitting keystroke
    Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
    Wire.write("m");             // define "m" - multiple Keystrokes
    Wire.write(keyStrokeByte1);
    Wire.write(keyStrokeByte2);
    Wire.write(keyStrokeByte3);
    Wire.write(modKeyByte1);
    Wire.write(modKeyByte2);
    Wire.write(modKeyByte3);
    Wire.endTransmission();      // stop transmitting
  }
  else if (server.hasArg("button")) {
    server.sendHeader("Location", "/");
    server.send(303);
    Serial.println("handleVyber");
    MacroEngine();
  }

  //if POST arg. isn't defined - send it
  else {
    server.send(400, "text/html", "<h1>Unknown post</h1><p>POST body: " + server.arg("plain") + "</p>");
  }
}
