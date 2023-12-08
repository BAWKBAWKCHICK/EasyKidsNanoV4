#include <EasyNano V.4.h>

void setup()
{
  EasyKidsNano_Setup();

  Button_Start(); //-----WaitForStart-----//
}

void loop()
{
  //-----Do after press switch-----//
  M(100,100);
}
