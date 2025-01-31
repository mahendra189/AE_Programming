// show distance of 4 digit Module

#include <TM1637Display.h>

TM1637Display display(CLK, DIO);

const int trigPin = 9;
const int echoPin = 10;

void setup()
{
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    display.setBrightness(5);
    display.showNumberDec(0000);
}

void loop()
{
    long duration;
    long distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    Serial.print("Distance: ");
    display.showNumberDec(distance);
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}


// Show Distance on LCD
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin = 9;
const int echoPin = 10;
void setup()
{
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    lcd.init();      
    lcd.backlight(); 
}

void loop()
{
    float duration;
    float distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration / (2 * 2910);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Distance:");
    lcd.print(distance, 2);
    lcd.print("m");
    lcd.setCursor(0, 1);
    delay(500);
}
