#include<Move.h>

const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;

Move motors(IN1,IN2,IN3,IN4);

void setup() {
 Serial.begin(9600);
}

void loop() {
   char command = Serial.read();

   switch(command){
       case'w':
       Serial.println("foward");
       motors.Foward();
       break;
       case 's':
       Serial.println("back");
       motors.Back();
       break;
       case 'd':
       Serial.println("right");
       motors.Right();
       break;
       case 'a':
       Serial.println("left");
       motors.Left();
       break;
       case 'q':
       Serial.println("foward left");
       motors.FowardLeft();
       break;
       case 'e':
       Serial.println("foward right");
       motors.FowardRight();
       break;
       case'z':
       motors.Stop();
       break;
   }
}
