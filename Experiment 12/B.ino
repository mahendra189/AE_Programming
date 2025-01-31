#include <TM1637.h> // use if not working TM1637Display

#define CLK 2  // Pin connected to CLK on TM1637
#define DIO 3  // Pin connected to DIO on TM1637

TM1637 tm1637(CLK, DIO);  // Create TM1637 object

void setup() {
  tm1637.init();  // Initialize the display
  tm1637.setBrightness(7);  // Set brightness level (0-7)
}

void loop() {
  for (int i = 0; i < 10; i++) {
    tm1637.display(0, i);  // Display the digit at position 0
    delay(1000);  // Wait for 1 second before changing number
  }
}
