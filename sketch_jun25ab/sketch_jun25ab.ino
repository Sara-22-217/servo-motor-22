#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo1;
int pos = 0; // variable to store the servo position
int post = 1;

void setup() {
  myservo.attach(12); // attaches the servo on pin 9 to the servo object
  myservo1.attach(13);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
   for (post = 1; post <= 180; post += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(post);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (post = 180; post >= 0; post -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(post);              // tell servo to go to position in variable 'pos'
    delay(15);  
  
  }}
  
  
  
  
