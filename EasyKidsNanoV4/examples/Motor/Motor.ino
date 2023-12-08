#include <EasyNano V.4.h>

void setup()
{
  EasyKidsNano_Setup();
}

void loop()
{
  Motor(100,100); //-----Motor(Speedleft,Speedright)-----//
  delay(1000);
  Motor(-100,-100);
  delay(1000);
  Motor(100,0);
  delay(1000);
  Motor(0,100);
  delay(1000);
}
