#define BLYNK_PRINT DebugSerial


// You could use a spare Hardware Serial on boards that have it (like Mega)
#include <SoftwareSerial.h>

SoftwareSerial DebugSerial(2, 3); // RX, TX
#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "cV5ubS7AzFTKOcd3_rfI1YwoQV84TwjE";


void setup()
{
  // Debug console
  DebugSerial.begin(9600);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V0)
{
  digitalWrite(9,HIGH);
  delay(5000);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(5000);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(5000);
  digitalWrite(11,LOW);
}
  
