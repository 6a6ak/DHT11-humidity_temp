#include "DHT.h"
DHT dht;
void setup()
{
Serial.begin(9600);
dht.setup(2); // data pin 2
}
void loop()
{
delay(dht.getMinimumSamplingPeriod());
Serial.print("Humidity =");Serial.println(dht.getHumidity());
Serial.print("\t");
Serial.print("Temp =");Serial.println(dht.getTemperature());
}
