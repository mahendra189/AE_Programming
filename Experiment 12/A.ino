#include <TM1637.h> // use if not working TM1637Display

#define CLK 2  // Pin connected to CLK on TM1637
#define DIO 3  // Pin connected to DIO on TM1637

TM1637 tm1637(CLK, DIO);  // Create TM1637 object

void setup() {
  tm1637.init();  // Initialize the display
  tm1637.setBrightness(7);  // Set brightness level (0-7)
}

void loop() {
  // Turn ON the first LED (digit 0) and OFF others
  tm1637.display(0, 0x3F);  // 0x3F is for ON (display 0)
  tm1637.display(1, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(2, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(3, 0x00);  // 0x00 is for OFF (blank)
  delay(1000);  // Wait for 1 second
  
  // Turn ON the second LED (digit 1) and OFF others
  tm1637.display(0, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(1, 0x3F);  // 0x3F is for ON (display 1)
  tm1637.display(2, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(3, 0x00);  // 0x00 is for OFF (blank)
  delay(1000);  // Wait for 1 second
  
  // Turn ON the third LED (digit 2) and OFF others
  tm1637.display(0, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(1, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(2, 0x3F);  // 0x3F is for ON (display 2)
  tm1637.display(3, 0x00);  // 0x00 is for OFF (blank)
  delay(1000);  // Wait for 1 second
  
  // Turn ON the fourth LED (digit 3) and OFF others
  tm1637.display(0, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(1, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(2, 0x00);  // 0x00 is for OFF (blank)
  tm1637.display(3, 0x3F);  // 0x3F is for ON (display 3)
  delay(1000);  // Wait for 1 second
}
