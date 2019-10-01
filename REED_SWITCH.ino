int reed= 13;
int led= 9;

void setup() {
  // put your setup code here, to run once:

pinMode(reed,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int state;
state= digitalRead(reed);
Serial.println(state);
if(state==HIGH)
{
  digitalWrite(led,HIGH);
 
}
delay(100);

 if(state==LOW)
{
 digitalWrite(led,LOW);
 
}
}
