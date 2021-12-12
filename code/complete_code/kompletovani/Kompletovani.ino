#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <Wire.h>

/*#include <SPI.h>
#include <SD.h>
File myFile;*/

/*ok, tak toto je ta změna*/

const byte DNS_PORT = 53;
IPAddress apIP(172, 217, 28, 1);
DNSServer dnsServer;
ESP8266WebServer server(80);

#include "website.h"
//#include "MacroEngine.h"
#include "handleVyber.h"

void handleNotFound()
{
  server.send(404, "text/plain", "404: Not found"); // Send HTTP status 404 (Not Found) when there's no handler for the URI in the request
}

void setup()
{

  Serial.begin(115200);
  Wire.begin(); //ATtiny85 is slave #10
  delay(250);

  /*if (!SD.begin(9)) {
    Serial.println("SD card initialization failed!");
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
    return;
  }
  else {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);
  }*/

  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP("WiFiUSB", "");

  // if DNSServer is started with "*" for domain name, it will reply with
  // provided IP to all DNS request
  dnsServer.start(DNS_PORT, "usb.com", apIP);

  server.on("/", HTTP_GET, handleRoot); // Call the 'handleRoot' function when a client requests URI "/"
  server.on("/vyber", HTTP_POST, handleVyber);
  server.onNotFound(handleNotFound); // When a client requests an unknown URI (i.e. something other than "/"), call function "handleNotFound"

  server.begin();
}

void loop()
{
  dnsServer.processNextRequest();
  server.handleClient();
}
