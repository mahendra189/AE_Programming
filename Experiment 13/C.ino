#include <Servo.h>

Servo myServo;  // Create a servo object

char command;  // Variable to store Bluetooth command

void setup() {
  Serial.begin(9600);  // Start serial communication
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  if (Serial.available()) {  // Check if data is available from Bluetooth
    command = Serial.read();  // Read the Bluetooth command
    if (command >= '0' && command <= '9') {  // Check if command is a valid digit (0-9)
      int angle = (command - '0') * 18;  // Convert command to angle (0-9 -> 0-180 degrees)
      myServo.write(angle);  // Rotate the servo to the specified angle
      delay(500);  // Wait for the servo to reach the position
    }
  }
}
