#define Start_Button 9

void Button_Start()
{
    pinMode(Start_Button,  INPUT_PULLUP);
    while(digitalRead(Start_Button) == 1) {}
    delay(500);
}