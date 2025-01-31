#define motorPin1 9  // IN1 on L298N
#define motorPin2 8  // IN2 on L298N
#define enablePin 5  // ENA on L298N (for PWM speed control)
#define potPin A0    // Potentiometer pin

int potValue = 0;  // Variable to store potentiometer value
int motorSpeed = 0;  // Variable to store motor speed

void setup() {
  pinMode(motorPin1, OUTPUT);  // Set motor pins as output
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);  // Set enable pin as output
}

void loop() {
  potValue = analogRead(potPin);  // Read the potentiometer value (0-1023)
  motorSpeed = map(potValue, 0, 1023, 0, 255);  // Map potentiometer value to PWM range (0-255)
  
  // Rotate motor clockwise with variable speed based on potentiometer
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, motorSpeed);  // Control motor speed using PWM
  
  delay(10);  // Small delay to stabilize readings
}
