#define IR_SENSOR_PIN 7
#define LED_PIN 13

void setup()
{
    pinMode(IR_SENSOR_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int sensorValue = digitalRead(IR_SENSOR_PIN);

    if (sensorValue == LOW)
    {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("Object detected!");
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
        Serial.println("No object detected.");
    }

    delay(100);
}
