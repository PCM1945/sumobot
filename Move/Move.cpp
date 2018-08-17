#include<Arduino.h>
#include<Move.h>


Move :: Move(uint8_t IN1,uint8_t IN2,uint8_t IN3,uint8_t IN4,uint8_t Port_A, uint8_t Port_B){
	pinMode(IN1,OUTPUT);
	pinMode(IN2,OUTPUT);
	pinMode(IN3,OUTPUT);
	pinMode(IN4,OUTPUT);
	pinMode(Port_A,OUTPUT);
	pinMode(Port_B,OUTPUT);
	
    in1 = IN1;
 	in2 = IN2;
 	in3 = IN3;
 	in4 = IN4;
 	pwmPortA = Port_A;
 	pwmPortB = Port_B;
}


//input states to move back 
void Move :: Back(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
  
//input states to move foward
 void Move :: Foward(){ 
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
}
   
  //input states to move right
  void Move :: Right(){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
}
  
  //input states to move left
void Move :: Left(){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
}
  //input states to stop
void Move ::  Stop(){ 
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

//input states to move foward right
void Move :: FowardRight(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
  
//input states to move fowardleft
void Move :: FowardLeft(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
   void Move :: PWM(int pwmVal_a,int pwmVal_b){
  	analogWrite(pwmPortA,pwmVal_a);
  	analogWrite(pwmPortB,pwmVal_b);
}
