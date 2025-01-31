#include <TM1637.h> // use if not working TM1637Display

#define CLK 2  // Pin connected to CLK on TM1637
#define DIO 3  // Pin connected to DIO on TM1637

TM1637 tm1637(CLK, DIO);  // Create TM1637 object

void setup() {
  tm1637.init();  // Initialize the display
  tm1637.setBrightness(7);  // Set brightness level (0-7)
}

void loop() {
  // Custom pattern (using values for segments)
  tm1637.display(0, 0x3F);  // Display 0
  tm1637.display(1, 0x06);  // Display 1
  tm1637.display(2, 0x5E);  // Display 4
  tm1637.display(3, 0x7F);  // Display 7
  
  delay(1000);  // Show the pattern for 1 second
}
