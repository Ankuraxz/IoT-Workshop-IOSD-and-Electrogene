
#define sound  5
#define led  11
#define buzz  12
 

void setup() {
  Serial.begin(9600);
  pinMode(sound, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = digitalRead(sound);
if (val == HIGH){
  Serial.println("HIGH");
  digitalWrite(led,HIGH);
  digitalWrite(buzz,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(buzz,LOW);
  delay(1000);
}
  else{
    Serial.println("low");}
  }
