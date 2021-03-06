  
const int DC = 3;
const int pot = A0;
int motor;

void setup()
{
  
  pinMode(DC,OUTPUT);
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  
}

void loop()
{
  motor = analogRead(pot);
  motor = map(motor,0,1023,0,100);
  analogWrite(DC,motor);
  Serial.println(motor);
  if(motor>60)
  {
    analogWrite(5,63);
  }
  else
  {
    analogWrite(5,0);
  }
}
