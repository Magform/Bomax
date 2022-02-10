#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "AnotherIFTTTWebhook.h"


//Variable that you need to change
#define WIFI_SSID "Your_SSID"   // replace Your_SSID with your wifi SSID
#define WIFI_PASS "Your_Password"  // replace Your_Password with your wifi password
#define IFTTT_Key "Your_Webhooks" // replace Your_Webhooks with your IFTTT Webhooks key
#define IFTTT_EventName "Your_Event" // replace Your_Event with your IFTTT event name

//Connetion
const int button = 13;

//function that see if the button is pressed
boolean setstate(){
   int currentState = digitalRead(button);
   if(currentState==1){
      return true;
    }
   return false;
   }

void setup() {
  
  Serial.begin(115200);
  Serial.println("");
  WiFi.begin(WIFI_SSID, WIFI_PASS); 
  Serial.print("Connecting to ");  // Connecting to WiFi
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print("."); 

  }
  Serial.println();
  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());

  //set button as input
  pinMode(button, INPUT_PULLUP);

}

void loop() {
  
  if(setstate()){
    Serial.println("Button pressed");
    send_webhook(IFTTT_EventName,IFTTT_Key,"" ,"" , "");
    }
    
}
