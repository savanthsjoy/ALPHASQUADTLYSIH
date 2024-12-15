#include <LiquidCrystal.h>
int MQ2pinl = A0;
int MQ2pin2 = A1;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("CO2    02");
}

void loop()
{
    float sensorValuel = analogRead(MQ2pinl);
  float sensorValue2 = analogRead(MQ2pin2);

  lcd_1.setCursor(0, 1);
  lcd_1.print (sensorValuel);
  lcd_1.setCursor(9, 1);
  lcd_1.print (sensorValue2);
  delay(100);
}