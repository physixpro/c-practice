#include <Arduino.h>
#define onboard A1
#define onboardTwo A2
#define onboardFive A5

void setup()
{
  pinMode(onboard, OUTPUT);
  pinMode(onboardTwo, OUTPUT);
  pinMode(onboardFive, OUTPUT);
}

void loop()
{
  digitalWrite(onboard, LOW);
  delay(50);
  digitalWrite(onboard, HIGH);
  delay(50);
  digitalWrite(onboardTwo, LOW);
  delay(50);
  digitalWrite(onboardTwo, HIGH);
  delay(50);
  digitalWrite(onboardFive, LOW);
  delay(30);
  digitalWrite(onboardFive, HIGH);
  delay(30);
}