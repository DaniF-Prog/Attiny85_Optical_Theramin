#include <Arduino.h>
void setup() 
{
 pinMode(4, INPUT);
 pinMode(1, OUTPUT);
 pinMode(0, OUTPUT);
 digitalWrite(4, HIGH);
 digitalWrite(0, LOW);
}

void loop() 
{
  volatile unsigned Freq = analogRead(2);
  Freq = map(Freq, 0, 1023 , 30, 16000);
  digitalWrite(1, HIGH);
  delayMicroseconds(Freq);
  digitalWrite(1, LOW);
  delayMicroseconds(Freq);
}