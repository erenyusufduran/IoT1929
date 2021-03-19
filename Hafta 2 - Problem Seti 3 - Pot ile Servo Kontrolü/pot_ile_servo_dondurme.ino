#include<Servo.h>
Servo servo1,servo2;
const byte potansiyometre_pin=A1;
const byte potansiyometre_pinn=A0;
int pot_deger;
int potdeger;


void setup() 
{
servo1.attach(9);
servo2.attach(10);
Serial.begin(9600);
}
 
void loop() 
{
pot_deger=analogRead(potansiyometre_pin);
int yeni_deger=map(pot_deger,0,1023,0,180);
potdeger=analogRead(potansiyometre_pinn);
int yenideger=map(potdeger,0,1023,0,90);
Serial.print("Potansiyometre Degeri= ");
Serial.println(yeni_deger);
servo1.write(yeni_deger);
servo2.write(yenideger);
}
 
