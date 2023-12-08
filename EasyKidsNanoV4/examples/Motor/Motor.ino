#include <EasyKidsNanoV4.h>

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  motor(100,100); //-----Motor(Speedleft,Speedright)-----//
  delay(1000);
  motor(-100,-100);
  delay(1000);
  motor(100,0);
  delay(1000);
  motor(0,100);
  delay(1000);
}
