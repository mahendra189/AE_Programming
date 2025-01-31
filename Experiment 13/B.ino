#include <Servo.h>

Servo myServo;  // Create a servo object

int potPin = A0;  // Pin where the potentiometer is connected
int potValue = 0;  // Variable to store potentiometer value
int angle = 0;  // Variable to store the servo angle

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  potValue = analogRead(potPin);  // Read the potentiometer value (0 to 1023)
  angle = map(potValue, 0, 1023, 0, 180);  // Map the potentiometer value to an angle (0 to 180)
  myServo.write(angle);  // Move the servo to the mapped angle
  delay(15);  // Wait for the servo to reach the position
}
