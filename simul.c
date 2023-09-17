#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
int solar = 0;

void setup()
{          
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  solar = (analogRead(A0) * (5.0011 / 1023.0011));
  Serial.println(solar);
  lcd.setCursor(0,0);           
  lcd.setCursor(0,1);
  lcd.begin(16,2);              
  lcd.print("pagina display");   
}

//codigo para realizaçao do projeto utilizando um arduino uno