#include <dht.h> 
#include <LiquidCrystal.h>

dht DHT;
#define DHT11_PIN 7
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  
  lcd.begin(16,2);
  lcd.print("Asfalt Sicaklik Olcumu");
  delay(500);
}

void loop()
{  
  int okunanDeger = DHT.read11(DHT11_PIN);
  
 
  lcd.setCursor(0,0);
  lcd.print("Asfalt Sicakligi: ");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(DHT.temperature);
  lcd.print("C");
  if(DHT.temperature<=2)
  {
    lcd.print(" BUZLANMA VAR!!!");
  }
  else
  {
    lcd.print(" BUZLANMA YOK!!!");
  }
  delay(1000);
  
}
