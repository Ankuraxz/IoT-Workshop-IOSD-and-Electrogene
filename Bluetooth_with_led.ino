    #include <SimpleDHT.h>
    #define ledPin 13
    int state = 0;
    //int sensor =98;
    
  
      

void setup() {
  //Serial.begin(115200);
  //pinMode(ledPin, OUTPUT);
      //digitalWrite(ledPin, LOW);
      Serial.begin(9600); // Default communication rate of the Bluetooth module
}

void loop() {
   int pinDHT11 = 3;
SimpleDHT11 dht11(pinDHT11);
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
        //state = Serial.read(); // Reads the data from the serial port
       
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  
  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, "); 
  Serial.print((int)humidity); Serial.println(" H");
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
        /*Serial.write(state);}*/
     
     /*if (state == '0') { //0 in app
      digitalWrite(ledPin, LOW); // Turn LED OFF
      Serial.println("LED: OFF");
      //Serial.write(state);
      //Serial.write(sensor);// Send back, to the phone, the String "LED: ON"
      state = 0;
     }
     else if (state == '1') { //1 in app
      digitalWrite(ledPin, HIGH);
      Serial.println("LED: ON");
      //Serial.write(state);
      //Serial.write(sensor);
      state = 0;*/
     } 
    
