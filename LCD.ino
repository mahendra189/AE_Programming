#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    lcd.init();      // initialize the lcd
    lcd.backlight(); // Turn on the LCD screen backlight
}

void loop()
{
    lcd.setCursor(1, 0);
    lcd.print("LCD Display");
    delay(3000);
    lcd.clear();
}
