#include <AFMotor.h>
#include <Servo.h>
Servo myservo;  

AF_DCMotor motor(3);

int pos = 0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(10); 
  motor.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:

motor.run(BACKWARD);
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);   
}
}