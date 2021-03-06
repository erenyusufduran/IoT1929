#include <dht.h> 

dht DHT;
#define DHT11_PIN 7 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int okunanDeger = DHT.read11(DHT11_PIN);

  Serial.print("Celcius = ");
  Serial.println(DHT.temperature);
  
  Serial.print("Fahrenheit = ");
  Serial.println(DHT.temperature *1.8+32);

  Serial.print("Kelvin = ");
  Serial.println(DHT.temperature + 273.15);

  Serial.print("Nem = ");
  Serial.println(DHT.humidity);
  delay(4000);
}
