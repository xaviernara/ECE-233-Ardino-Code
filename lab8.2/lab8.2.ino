const int temperaturePin=0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


void setup() {
 Serial.begin(9600);
 lcd.begin(16,2);
 lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  float voltage, degreesF, degreesC;
  voltage=getVoltage(temperaturePin);
  degreesC=(voltage-.5)*100.0;
  degreesF=degreesC*(9.0/5.0)+32;
  lcd.print(degreesF);

}

float getVoltage(int pin)
{
  return(analogRead(pin)*.004882814);
}
