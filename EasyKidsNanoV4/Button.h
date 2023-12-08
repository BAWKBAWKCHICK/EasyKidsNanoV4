#define Start_Button 9

void WaitForStart()
{
    pinMode(Start_Button,  INPUT_PULLUP);
    while(digitalRead(Start_Button) == 1) {}
    delay(500);
}