#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "AnotherIFTTTWebhook.h"


//Variable that you need to change
#define WIFI_SSID "Interno12"   // replace Your_SSID with your wifi SSID
#define WIFI_PASS "Magnolia88."  // replace Your_Password with your wifi password
#define IFTTT_Key "MJJT3l04HEftIE8EBgDOhXZm-JDlmarkxQwoXT8fgY" // replace Your_Webhooks with your IFTTT Webhooks key
#define IFTTT_EventName "bottone"

const int button = 13;
int state=0;

boolean setstate(){
   int currentState = digitalRead(button);
   if(currentState==1){
      return true;
    }
   return false;
   }

void setup() {
   Serial.begin(115200);
   Serial.println();
  Serial.println("");
     // Connecting to WiFi...
  WiFi.begin(WIFI_SSID, WIFI_PASS); 
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");

  }
 
  // Connected to WiFi
  Serial.println();
  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());
  pinMode(button, INPUT_PULLUP);

}

void loop() {
  if(setstate()){
    Serial.println("Button pressed");
    send_webhook(IFTTT_EventName,IFTTT_Key,"" ,"" , "");
    }
}
