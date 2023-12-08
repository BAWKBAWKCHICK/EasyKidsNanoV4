#include <EasyKidsNanoV4.h>

void setup()
{
  Serial.begin(9600);
  Button_Start(); //-----WaitForStart-----//
}

void loop()
{
  //-----Do after press switch-----//
  motor(100,100);
}
