//-----PIN-----//
#define Analog0 A0
#define Analog1 A1
#define Analog2 A2
#define Analog3 A3
#define Analog4 A4
#define Analog5 A5
#define Analog6 A6

void IO_Setup()
{
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
    pinMode(A3, INPUT);
    pinMode(A4, INPUT);
    pinMode(A5, INPUT);
    pinMode(A6, INPUT);
}

int analog(int pin) //-----AnalogRead-----//
{
    if (pin == 0)pin = A0;
    else if (pin == 1)pin = A1;
    else if (pin == 2)pin = A2;
    else if (pin == 3)pin = A3;
    else if (pin == 4)pin = A4;
    else if (pin == 5)pin = A5;
    else if (pin == 6)pin = A6;
    return analogRead(pin);
}

int digital(int pin) //-----DigitalRead-----//
{
    if (pin == 0)pin = A0;
    else if (pin == 1)pin = A1;
    else if (pin == 2)pin = A2;
    else if (pin == 3)pin = A3;
    else if (pin == 4)pin = A4;
    else if (pin == 5)pin = A5;
    else if (pin == 6)pin = A6;
    return digitalRead(pin);
}

int Pullup(int pin) //-----DigitalPullupRead-----//
{
    if (pin == 0)pin = A0;
    else if (pin == 1)pin = A1;
    else if (pin == 2)pin = A2;
    else if (pin == 3)pin = A3;
    else if (pin == 4)pin = A4;
    else if (pin == 5)pin = A5;
    else if (pin == 6)pin = A6;
    pinMode(pin, INPUT_PULLUP);
    return digitalRead(pin);
}

void Write(int pin, int state) //-----DigitalWrite-----//
{
    if (pin == 0)pin = A0;
    else if (pin == 1)pin = A1;
    else if (pin == 2)pin = A2;
    else if (pin == 3)pin = A3;
    else if (pin == 4)pin = A4;
    else if (pin == 5)pin = A5;
    else if (pin == 6)pin = A6;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, state);
}