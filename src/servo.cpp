#include "config.h"
#include <Servo.h>

#define servoPin 11

//used servo's
Servo gripper;
Servo wrist;
Servo shoulder;
Servo elbow;

//TODO make a timer independed on a milis timer inoder to move the servo without delay

/**
* this class is for controlling all the servo functions
* @ servoPin is for attaching a 
*/
class Servo {
public:
  //servo values
  Servo miServo
  int servoPin;
  int servoPosition;
  int minimumPosition;
  int maximumPosition;

  //servo methodes
  void servoConfig();
  

};

/**
* sets the pin to the servo
*/
void servoConfig() {
  /*shoulderservo.attach(SHOULDER_SERVO_PIN);
  elbowServo.attach(ELBOW_SERVO_PIN);
  wristservo.attach(WRITS_SERVO_PIN);
  gripservo.attach(GRIP_SERVO_PIN);*/
  miServo.attach(serovPin);
}

/**
* this function moves the servo to one position 
* @ param target is the target for the servo to move to
*/
int moveToTarget(int target){
  if (miServo.read > minimumPosition && miServo < maximumPosition){
    
  }
}

/**
* this program is for tseting the range of the servo's
* the program turns the servo 
*/
void testServo() {
  for (int i = max; i > min; i--) {
    myservo.write(i);
    Serial.println(i);
    delay(100);
  }
  for(int i = min; i < max; i++){
    myservo.write(i);
    Serial.println(i);
    delay(100);
  }
}

