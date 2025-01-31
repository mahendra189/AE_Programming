#define LED_COUNT 8
int leds[LED_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
    for (int i = 0; i < LED_COUNT; i++) {
        pinMode(leds[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < LED_COUNT; i++) {
        digitalWrite(leds[i], HIGH);
        delay(200);
        digitalWrite(leds[i], LOW);
    }
    
    for (int i = LED_COUNT - 1; i >= 0; i--) {
        digitalWrite(leds[i], HIGH);
        delay(200);
        digitalWrite(leds[i], LOW);
    }
}
