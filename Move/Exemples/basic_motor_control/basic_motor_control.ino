#include<Move.h>
// MOTOR A
const byte IN1 = 7;
const byte IN2 = 6;
// MOTOR B
const byte IN3 = 5;
const byte IN4 = 4;

Move motors(IN1,IN2,IN3,IN4);

void setup() {
 Serial.begin(9600);
}

void loop() {
  
    Serial.println("F");
    motors.Foward();
    delay(2000);
   
    Serial.println("L");
    motors.Left();
    delay(2000);
    
    Serial.println("B");
    motors.Back();
    delay(2000);
 
    Serial.println("R");
    motors.Right();
    delay(2000);
    
    Serial.println("S");
    motors.Stop();
    delay(2000);

}
