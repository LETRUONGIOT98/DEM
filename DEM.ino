int encoder = 2;
 int counter;
 #include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

 
void setup() {
  lcd.init();
  //lcd.begin();
  lcd.backlight();
  pinMode(encoder, INPUT);
  digitalWrite(encoder, LOW);
  attachInterrupt(0,countpulse,RISING);

}
 
void countpulse(){
        counter++;
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("   DEM SO LAN   ");
  lcd.setCursor(0,1);
  lcd.print("SO LAN:         ");
  lcd.setCursor(8,1);
  lcd.print(counter);
   
  delay(10);
}
