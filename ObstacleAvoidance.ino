/* Obstacle avoidance with a robot car */

#include <Servo.h>
Servo myservo
#define trigPin 13
#define echoPin 12 
#define servoPin 10
int distR = 0, distM = 0, distL = 0
int motorA = 8;
int motorB = 7;
int motorspeedA = 6;
int motorspeedB = 5;

void setup() {
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
digitalWrite(3,1);
}

void Dtest() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 float Fdistance = pulseIn (echoPin, HIGH);
 Fdistance = Fdistance/58;
}

void forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);
}

void backward() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 255);
}

void left() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);
}

void right() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);
}

void left_forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 126);
analogWrite (motorspeedB, 255);
}

void left_backward() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 126);
analogWrite (motorspeedB, 255);
}


void right_forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 126);
}


void right_backward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 255);
}


void Stop() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 0);
analogWrite (motorspeedB, 0);
}


void loop() {

myservo.write (90);
delay(500);
distM = Dtest();

if (distM < 15) {
  Stop();
  delay(500);
  myservo.write(10);
  delay(1000);
  distR = Dtest
}






 
}
