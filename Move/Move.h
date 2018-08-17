#ifndef Move_h
	#define Move_h
    #include<Arduino.h>
    
class Move{
	public:
	Move(uint8_t IN1,uint8_t IN2,uint8_t IN3,uint8_t IN4, uint8_t Port_A, uint8_t Port_B);	
	void Back();
	void Foward();
	void Right();
	void Left();
	void Stop();
	void FowardRight();
	void FowardLeft();
	void PWM(int pwmVal_a, int pwmVal_b);
	private:
		uint8_t in1;
		uint8_t in2;
		uint8_t in3;
		uint8_t in4;
		uint8_t pwmPortA;
		uint8_t pwmPortB;
};
	#endif
  



