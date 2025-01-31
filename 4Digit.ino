#include <TM1637Display.h>

// Define connections
#define CLK 3 // Clock pin
#define DIO 2 // Data pin

// Initialize the display
TM1637Display display(CLK, DIO);

void setup()
{
    display.setBrightness(1); // Set brightness (0-7)
    display.showNumberDec(1); // Display the number 1234
}

void loop()
{
    // Nothing to do in the loop for static display
    display.showNumberDec(1234);

    // counting from 0 to 100
    for (int i = 0; i < 101; i++)
    {
        display.showNumberDec(i);
        delay(400);
    }
}

Define pins for the Ultrasonic sensor