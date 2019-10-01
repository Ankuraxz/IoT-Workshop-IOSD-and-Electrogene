int led= 8;
int pir= 3;

void setup() {
 pinMode(led,OUTPUT);
 pinMode(pir,INPUT);

}

void loop() {
int value;
value=digitalRead(pir);
if(value==HIGH)
{
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
  
}
else
{
  digitalWrite(led,LOW);
}
}
