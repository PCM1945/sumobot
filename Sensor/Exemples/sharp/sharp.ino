#include<Sharp.h>
byte sensor_port = A0;

Sharp sensor(sensor_port);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int dist = sensor.DistanceRead();
  if(dist <= 80){
      Serial.println(dist);
  }
    delay(700);

}
