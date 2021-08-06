/*void MacroCOMMENT() {
  while (myFile.read() != 10 && myFile.available());
}

void MacroPRINT() {
  char znak = 0;
  String text;
  while (znak != 10 && myFile.available()) {
    znak = myFile.read();
    text += znak;
  }
  Serial.println(text);

  char buffer[128];
  text.toCharArray(buffer, 128);
  
  //transmitting text
  Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
  Wire.write("p");             // define "p" - print text
  Wire.write(buffer);
  Wire.endTransmission();      // stop transmitting
}


void MacroPRINT_LINE() {
  char znak = 0;
  String text;
  while (znak != 10 && myFile.available()) {
    znak = myFile.read();
    text += znak;
  }
  Serial.println(text);
  Serial.println();     //nezapoměň dodat ENTER
  
  char buffer[128];
  text.toCharArray(buffer, 128);
  
  //transmitting text
  Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
  Wire.write("p");             // define "p" - print text
  Wire.write(buffer);
  Wire.write("\n");
  Wire.endTransmission();      // stop transmitting
}

void MacroDELAY() {
  long cislo = 0;
  char znak = 0;
  while (znak != 10 && myFile.available()) {
    znak = myFile.read();
    if (znak != 10 && znak != 13) {
      cislo = cislo * 10 + znak - 48;
    }
  }
  delay(cislo);
}

void MacroSHORT_CUT() {
  byte Mods[] = {0, 0, 0};
  byte Keys[] = {0, 0, 0};
  char znak = 0;
  while (znak != 10 && myFile.available()) {
    znak = myFile.read();
    if (znak > 48 && znak < 58) { // jestli to je číslo
      int cislo = 0;
      while (znak != 59 && znak != 10 && znak != 13 && myFile.available()) {
        cislo = cislo * 10 + znak - 48;
        znak = myFile.read();
      }
      if (cislo > 223 && cislo < 232) { //jetli je výsledké číslo MOD namísto normální klávesy
        for (int i = 0; i < 3; i++) {
          if (Mods[i] == 0) {
            Mods[i] = cislo - 224;
            break;
          }
        }
      }
      else {
        for (int i = 0; i < 3; i++) {
          if (Keys[i] == 0) {
            Keys[i] = cislo;
            break;
          }
        }
      }

    }
  }
  Serial.println(String(Keys[0]) + " " + String(Keys[1]) + " " + String(Keys[2]) + " " + String(Mods[0]) + " " + String(Mods[1]) + " " + String(Mods[2]));
  //transmitting keystroke
  Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
  Wire.write("m");             // define "m" - multiple Keystrokes
  Wire.write(Keys[0]);
  Wire.write(Keys[1]);
  Wire.write(Keys[2]);
  Wire.write(Mods[0]);
  Wire.write(Mods[1]);
  Wire.write(Mods[2]);
  Wire.endTransmission();      // stop transmitting
}

void MacroKEY_STROKE() {
  byte cislo = 0;
  char znak = 0;
  while (znak != 10 && myFile.available()) {
    znak = myFile.read();
    if (znak != 10 && znak != 13) {
      cislo = cislo * 10 + znak - 48;
    }
  }
  Serial.println(cislo);
  //transmitting keystroke
  Wire.beginTransmission(10);  // transmit to ATtiny85 (slave #10)
  Wire.write("k");             // define "k" - single Keystroke
  Wire.write(cislo);
  Wire.endTransmission();      // stop transmitting
}

void MacroEngine() {
  myFile = SD.open("makra/" + String(server.arg("button")) + ".txt");
  Serial.println("po otevření makra");
  Serial.println("makra/" + String(server.arg("button")) + ".txt");

  if (myFile) {
    Serial.println("makro.txt:");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {

      //get command (first letters before SPACE character: char n. 32)
      String prikaz = "";
      for (char znak = 0; znak != 32 && myFile.available();) {
        znak = myFile.read();
        if (znak > 96 && znak < 123) znak = znak - 32; //remove case-sensitive
        if (znak != 32) prikaz += znak;
      }
      Serial.println(prikaz);

      //execute the right command
      if (prikaz == "CMT" || prikaz == "COMMENT") {
        MacroCOMMENT();
      }
      else if (prikaz == "PRT" || prikaz == "PRINT") {
        MacroPRINT();
      }
      else if (prikaz == "PRL" || prikaz == "PRINT_LINE") {
        MacroPRINT_LINE();
      }
      else if (prikaz == "DLY" || prikaz == "DELAY") {
        MacroDELAY();
      }
      else if (prikaz == "KES" || prikaz == "KEY_STROKE") {
        MacroKEY_STROKE();
      }
      else if (prikaz == "SHC" || prikaz == "SHORT_CUT") {
        MacroSHORT_CUT();
      }
      else {
        Serial.println("invalid command");
        while (myFile.read() != 10 && myFile.available());
      }
    }
    // close the file:
    myFile.close();
  } else {
    Serial.println("error opening test.txt");
  }
}*/
