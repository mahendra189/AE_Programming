#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Custom Message!");

  // Scroll left
  for (int pos = 0; pos < 16; pos++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  delay(1000);

  // Scroll right
  for (int pos = 0; pos < 16; pos++) {
    lcd.scrollDisplayRight();
    delay(300);
  }

  delay(1000);
}
