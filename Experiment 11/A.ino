#define IR_PIN 7  // Pin connected to IR sensor output

void setup() {
  pinMode(IR_PIN, INPUT);  // Set IR sensor pin as input
  Serial.begin(9600);      // Start the serial communication at 9600 baud
}

void loop() {
  int sensorState = digitalRead(IR_PIN);  // Read the sensor's output

  if (sensorState == LOW) {  // IR sensor output is LOW when obstacle is detected
    Serial.println("Obstacle detected!");
  } else {
    Serial.println("No obstacle detected.");
  }

  delay(500);  // Delay for half a second to avoid flooding the serial monitor
}
