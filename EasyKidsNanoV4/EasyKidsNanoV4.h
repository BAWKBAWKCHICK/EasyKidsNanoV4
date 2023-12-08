//-----Origin-----//
#include "Motor.h"
#include "Button.h"
#include "IO.h"
#include "DipSwitch.h"

//-----Non Origin-----//

void EasyKidsNano_Setup()
{
    Serial.begin(9600);
    IO_Setup();
}
