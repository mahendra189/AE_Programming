#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // LCD address 0x27, 16 columns, 2 rows

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);  // Set cursor to 4th column, 1st row
  lcd.print("Hello World!");
}

void loop() {
  // Nothing to loop
}
