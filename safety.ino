#include<UltraDistSensor.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int led1=4;
int led2=3;
int led3=2;
UltraDistSensor mysensor;
float reading;

void setup() {
    lcd.begin();                      // initialize the lcd 
    lcd.backlight();
    Serial.begin(9600);
    mysensor.attach(10,11);//Trigger pin , Echo pin
    pinMode(4,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
}

void loop() {
    reading=mysensor.distanceInCm();
    lcd.setCursor(0,0);
    lcd.print("Group 1: Lab 07");
    lcd.setCursor(0,1);
    lcd.print("Distance:");
    lcd.print(reading);
    lcd.print("CM");
    delay(500);
    if (reading > 15)
  {
    digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led3, LOW);
  }

  if (reading <= 15)
  {
    if(reading >= 5)
    {
      digitalWrite(led2, HIGH);
    }
    else
    {
      digitalWrite(led2, LOW);
    }
  }
  else
    {
      digitalWrite(led2, LOW);
    }
  

  if (reading < 5)
  {
    digitalWrite(led1, HIGH);
  }
  else
    {
      digitalWrite(led1, LOW);
    }
  
}
