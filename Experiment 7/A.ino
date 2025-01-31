#define LDR_PIN A0
#define LED_PIN 9

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int ldrValue = analogRead(LDR_PIN);
    Serial.println(ldrValue);
    
    if (ldrValue < 500) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
    
    delay(200);
}
