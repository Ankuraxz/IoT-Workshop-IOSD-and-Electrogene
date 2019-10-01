#define sensor A0
#define led  11
#define buzz  12
 

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(sensor);
if (val > 500){
  Serial.println(val);
  Serial.print("HIGH");
  analogWrite(led,200);
  analogWrite(led,400);
  analogWrite(led,600);
  analogWrite(led,800);
  analogWrite(led,1000);
  //digitalWrite(buzz,HIGH);
  delay(1000);
  analogWrite(led,0);
  //digitalWrite(buzz,LOW);
  delay(1000);
}
  else if(val <=500) {
    Serial.println(val);
  Serial.print("low");}
  }
 
