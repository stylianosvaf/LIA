/* Line tracking with a robot car */

#define R analogRead(A0)
#define M analogRead(A1)
#define L analogRead(A2)  // we must define each sensor
int motorA = 8;
int motorB = 7;
int motorspeedA = 6;
int motorspeedB = 5;  // create ints for the motors and speeds of each side


void setup() {
  
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);  // set motors and speeds as outputs
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);  // set sensors as inputs
digitalWrite(3,1);  // set standby as on
Serial.begin(9600);
}

void forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);  // create a forward function
}

void backward() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 255);  // create a backward function
}

void left() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);  // create a left function
}

void right() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 100);
analogWrite (motorspeedB, 100);  // create a right function
}

void left_forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 126);
analogWrite (motorspeedB, 255);  // create a left forward function
}

void left_backward() {  
digitalWrite (motorA, 0);
digitalWrite (motorB, 0);
analogWrite (motorspeedA, 126);
analogWrite (motorspeedB, 255);  // create a left backward function
}

void right_forward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 126);  // create a right forward function
}

void right_backward() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 255);
analogWrite (motorspeedB, 255);  // create a right backwards function
}

void Stop() {  
digitalWrite (motorA, 1);
digitalWrite (motorB, 1);
analogWrite (motorspeedA, 0);
analogWrite (motorspeedB, 0);  // create a stop function
}


void loop() {
  
if (M > 35){
  forward();  // if the middle sensor detects back it moves forward using the function
}

else if (L > 100){
  left();            // else if the left sensor detects black it moves left
}

else if (R > 40){
  right();          // else if the right sensor detects black it moves right
}

else if (M < 35){
  right();         // else if the middle sensor does not detect black it turns right until it detects black
}


}
