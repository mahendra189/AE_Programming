#define LDR_PIN A0
#define LED_PIN 6

int count = 0;
bool objectDetected = false;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, HIGH);
    Serial.begin(9600);
}

void loop() {
    int ldrValue = analogRead(LDR_PIN);
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    if (ldrValue < 400 && !objectDetected) {
        count++;
        Serial.print("Objects Count: ");
        Serial.println(count);
        objectDetected = true;
    } 
    if (ldrValue > 500) {
        objectDetected = false;
    }

    delay(100);
}
