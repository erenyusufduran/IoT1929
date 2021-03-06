#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(9);

}

void loop()
{

  for(int i=0;i<=180;i+=15)
  {
    servo.write(i);
    delay(500);
  }
  for(int i=180;i>=0;i-=30)
  {
    servo.write(i);
    delay(500);
  }
  
}
