#include <Servo.h>

Servo myServo;  // Create a servo object

int pos = 0;  // Variable to store the servo position

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
  myServo.write(pos);  // Set the servo to 0 degrees initially
  delay(1000);  // Wait for the servo to reach 0 degrees
}

void loop() {
  for (pos = 0; pos <= 180; pos++) {  // Rotate from 0 to 180 degrees
    myServo.write(pos);  // Move the servo to the desired position
    delay(15);  // Wait for the servo to reach the position
  }

  for (pos = 180; pos >= 0; pos--) {  // Rotate back from 180 to 0 degrees
    myServo.write(pos);
    delay(15);
  }
}
