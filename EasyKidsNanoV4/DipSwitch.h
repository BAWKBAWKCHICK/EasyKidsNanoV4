#define Dip1 10
#define Dip2 11
#define Dip3 12

int Dip(int pin)
{
    if(pin == 1)pin = 10;
    else if(pin == 2)pin = 11;
    else if(pin == 3)pin = 12;
    pinMode(pin,  INPUT_PULLUP);
    return digitalRead(pin);
}