#include <Servo.h>

Servo s;
void setup()
{
    s.attach(12);
}

void loop()
{
    for (int i = 0; i <= 180; i++)
    {
        s.write(i);
        delay(30);
    }
}