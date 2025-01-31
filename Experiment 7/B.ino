#define LDR_PIN A0
#define LED1 8
#define LED2 9
#define LED3 10

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int ldrValue = analogRead(LDR_PIN);
    Serial.println(ldrValue);

    if (ldrValue < 500) {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
    } else {
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
    }

    delay(200);
}
