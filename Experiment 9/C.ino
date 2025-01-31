#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte customChar[8] = {
  0b00000,
  0b01010,
  0b01110,
  0b11111,
  0b11111,
  0b01110,
  0b01010,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, customChar);  // Create custom character at position 0
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(0);  // Display custom character
}

void loop() {
  // Nothing to loop
}
