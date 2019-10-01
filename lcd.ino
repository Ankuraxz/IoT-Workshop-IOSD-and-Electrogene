#include <LiquidCrystal.h>

int ldr=10;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(ldr,INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
 
}

void loop() {
  
 
 
  lcd.print("DREMAC");
  
  if(digitalRead(ldr))
  {
    lcd.setCursor(0,1);
    lcd.print("Light");
  }
}
