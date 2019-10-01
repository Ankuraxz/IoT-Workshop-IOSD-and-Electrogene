#define relay1 5
#define relay2 6

void setup() {
  // put your setup code here, to run once:
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  int state = Serial.read();
if(state == '1'){
  digitalWrite(relay1, HIGH);
   //digitalWrite(relay2, LOW);
   Serial.println("DEVICE 1 ON");
  delay(2000);
  //state = '0';
}
 else if(state == '2'){
  digitalWrite(relay2, HIGH);
  //digitalWrite(relay1, LOW);
  Serial.println("DEVICE 2 ON");
  delay(2000);
  //state = '0';
  }
else if(state == '3') {
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  Serial.println("ALL DEVICE OFF");
  delay(2000);
  }


//digitalWrite(relay1, LOW);
  //digitalWrite(relay2, LOW);
}
}
