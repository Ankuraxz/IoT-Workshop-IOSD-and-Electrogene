#include <SimpleDHT.h>
#define relay1  4
#define relay2  5
#define pinDHT11 2
//DHT with relay
// if excess humidity on the relay to close windows
SimpleDHT11 dht11(pinDHT11);
int var=0;
void setup() {
  // put your setup code here, to run once:
pinMode(relay1,HIGH);
pinMode(relay2,HIGH);
Serial.begin(9600);

}
byte temperature = 0;
byte humidity = 0;
void loop() {
  
  // put your main code here, to run repeatedly:
  //Serial.println("=================================");
  //Serial.println("Sample DHT11...");
  //byte temperature = 0;
  //byte humidity = 0;
  //int err = SimpleDHTErrSuccess;
  /*if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;}
    dht11.read(&temperature, &humidity, NULL)
    
  Serial.print("Sample OK: ");*/
  dht11.read(&temperature, &humidity, NULL);
  if(abs(var-(int)humidity) >= 10){
  Serial.print((int)temperature); Serial.print(" *C, "); 
  Serial.print((int)humidity); Serial.println(" H");
  int humid = (int)humidity;
  if(humid >=60){
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, HIGH);
     Serial.print((int)temperature); Serial.print(" *C, ");
     Serial.println("Windows close: RAIN PROBABILITY");
    delay(2000);
  }
  //humid = (int)humidity;
  //digitalWrite(relay1, LOW);
  //dgitalWrite(relay2, LOW);
  
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
  var = (int)humidity;
  
  }
  
}
