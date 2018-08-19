#include<Arduino.h>
#include "Sensor.h"

#define CONVS 0.0048828125


/*
types: 
 S - sharp;
 F - front_sensor;
 L - line sensor;
*/ 

Sensor::sensor(uint8_t sensor){
	pinMode(port, INPUT);
	sensor = port;
}1


int Sensor::DistanceRead(char type){
	type = type;
	
	float volts;
	int dist;
	
	if (type = 'S'){
		volts = analogRead(port) * CONVS;
	    dist = 26 * pow(volts, -1);
	       return dist;
	}
	else if(type = 'F' || type = 'L'){
		volts = digitalRead(port);
		
	}
}

