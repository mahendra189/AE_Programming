#define motorPin1 9  // IN1 on L298N
#define motorPin2 8  // IN2 on L298N
#define buttonPin 7  // Push button pin

int buttonState = 0;  // Variable to store button state

void setup() {
  pinMode(motorPin1, OUTPUT);  // Set motor pins as output
  pinMode(motorPin2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Set button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the state of the button
  
  if (buttonState == HIGH) {
    // Button is pressed - Rotate motor clockwise
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  } else {
    // Button is released - Rotate motor anti-clockwise
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
}
