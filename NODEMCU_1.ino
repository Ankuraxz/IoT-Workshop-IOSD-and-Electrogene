#include <ESP8266WiFi.h>
const char* ssid = "Ankur";
const char* pass ="12345678";

WiFiServer server(80);

void setup(){
  Serial.begin(115200);
  Serial.print("Connecting to Wifi....");
  Serial.println(ssid);
  WiFi.begin(ssid,pass);
  while(WiFi.status()!=WL_CONNECTED){
    delay(400);
    Serial.println(".");  }
  Serial.println(" ");
  Serial.println("WiFi Connected");
  server.begin();
  Serial.println("Web server is running writing for the ESP IP");
  Serial.println(WiFi.localIP());
  
}

void loop(){
  WiFi
}
