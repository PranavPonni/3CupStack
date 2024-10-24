#include <Servo.h>

// Define the servo objects
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;

// Define initial and final positions
int initialPosition4 = 135;
int initialPosition4_1 = 150;
int initialPosition4_2 = 125;
int initialPosition4_3 = 138;
int finalPosition4 = 40;

int initialPosition5 = 60;
int midPosition5 = 40;
int finalPosition5 = 0;

int initialPosition6 = 0;
int midPosition6 = 68;
int finalPosition6 = 50;

int initialPosition7 = 80;
int finalPosition7 = 150;

void setup() {
  // Attach the servos to their respective pins
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);

  // Move servos to their initial positions
  servo4.write(initialPosition4);
  servo5.write(initialPosition5);
  servo6.write(initialPosition6);
  servo7.write(initialPosition7);

  delay(2000);

  // Execute the movement sequence
  // Step 1
  moveServo(servo4, initialPosition4, finalPosition4);
  delay(500);

  // Step 2
  moveServo(servo5, initialPosition5, finalPosition5);
  delay(500);

  // Step 3
  moveServo(servo6, initialPosition6, finalPosition6);
  delay(500);

  // Step 4
  moveServo(servo7, initialPosition7, finalPosition7);
  delay(500);

  // Step 5
  moveServo(servo5, finalPosition5, initialPosition5);
  delay(500);

  // Step 6
  moveServo(servo4, finalPosition4, initialPosition4_1);
  delay(500);

  // Step 7
  moveServo(servo5, initialPosition5, finalPosition5);
  delay(500);

  // Step 8
  moveServo(servo7, finalPosition7, initialPosition7);
  delay(2000);

  // Step 9
  moveServo(servo5, finalPosition5, initialPosition5);
  delay(500);

  // Step 10
  moveServo(servo6, finalPosition6, initialPosition6);
  delay(500);

// end of sequence 1

  // Step 11
  moveServo(servo4, initialPosition4_1, finalPosition4);
  delay(500);

  // Step 12
  moveServo(servo5, initialPosition5, finalPosition5);
  delay(500);

  // Step 13
  moveServo(servo6, initialPosition6, finalPosition6);
  delay(500);

  // Step 14
  moveServo(servo7, initialPosition7, finalPosition7);
  delay(500);

  // Step 15
  moveServo(servo5, finalPosition5, initialPosition5);
  delay(500);

  // Step 16
  moveServo(servo4, finalPosition4, initialPosition4_2);
  delay(500);

  // Step 17
  moveServo(servo5, initialPosition5, finalPosition5);
  delay(500);

  // Step 18
  moveServo(servo7, finalPosition7, initialPosition7);
  delay(2000);

  // Step 19
  moveServo(servo5, finalPosition5, initialPosition5);
  delay(500);

  // Step 20
  moveServo(servo6, finalPosition6, initialPosition6);
  delay(500);

// end of sequence 2

  // Step 21
  moveServo(servo4, initialPosition4_2, finalPosition4);
  delay(500);

  // Step 22
  moveServo(servo5, initialPosition5, finalPosition5);
  delay(500);

  // Step 23
  moveServo(servo6, initialPosition6, finalPosition6);
  delay(500);

  // Step 24
  moveServo(servo7, initialPosition7, finalPosition7);
  delay(500);

  // Step 25
  moveServo(servo5, finalPosition5, midPosition5);
  delay(500);

  // Step 26
  moveServo(servo4, finalPosition4, initialPosition4_3);
  delay(500);

  // Step 27
  moveServo(servo6, finalPosition6, midPosition6);
  delay(500);

  // Step 28
  moveServo(servo7, finalPosition7, initialPosition7);
  delay(2000);

  // Step 29
  moveServo(servo5, midPosition5, initialPosition5);
  delay(500);

  // Step 30
  moveServo(servo6, finalPosition6, initialPosition6);
  delay(500);

// end of sequence 3

}

void loop() {
  // Nothing needed here, as we want the sequence to happen only once
}

void moveServo(Servo &servo, int start, int end) {
  int step = 2; // Increase step size to make movements faster
  if (start < end) {
    for (int pos = start; pos <= end; pos += step) {
      servo.write(pos);
      delay(13); // Reduced delay for faster movement
    }
  } else {
    for (int pos = start; pos >= end; pos -= step) {
      servo.write(pos);
      delay(13); // Reduced delay for faster movement
    }
  }
}
