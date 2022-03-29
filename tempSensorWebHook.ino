// This #include statement was automatically added by the Particle IDE.

#include <Adafruit_DHT.h>

DHT dht(A0, DHT11);


void setup() {

  dht.begin();

}



void loop() {

  //gets temp in celcius
  float temp = dht.getTempCelcius();
  //sends to webhook

  Particle.publish("temp", String(temp), PRIVATE);
  //delays for 3 seconds
  delay(3000);            
        

}