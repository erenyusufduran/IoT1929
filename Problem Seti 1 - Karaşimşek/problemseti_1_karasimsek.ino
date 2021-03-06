void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  for(int i=3;i<=7;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  for(int i=7;i>=3;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
}
