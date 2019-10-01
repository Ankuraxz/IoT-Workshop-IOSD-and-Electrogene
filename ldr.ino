int ldr= A0;
int led= 9;

void setup() {
  // put your setup code here, to run once:

pinMode(ldr,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int state;
state= analogRead(ldr);
if(state<=25)
{
  digitalWrite(led,HIGH);
 
}
else if(state>25)
{
 digitalWrite(led,LOW);
 
}
}
