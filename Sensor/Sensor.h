#ifndef Sensor_H
#define Sensor_H

#include <Arduino.h>

class Sensor{
	public:
		Sensor(uint8_t port);
		int DistanceRead(char type);
		private:
			uint8_t port;
		
};
#endif
