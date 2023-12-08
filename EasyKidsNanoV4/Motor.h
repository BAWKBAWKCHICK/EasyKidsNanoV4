int SpeedL = 0 ;
int SpeedR = 0 ;

void Motor(int L , int R)
{
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);

    if (L > 0) //-----MapspeedL-----//
    {
        SpeedL = map(L, 0, 100, 0, 255);
    }
    else 
    {
        SpeedL = map(L, -0, -100, 0, 255);
    }

    if (R > 0) //-----MapspeedR-----//
    {
        SpeedR = map(R, 0, 100, 0, 255);
    }
    else 
    {
        SpeedR = map(R, -0, -100, 0, 255);
    }

    analogWrite(5, SpeedL); //-----PWML-----//
    analogWrite(6, SpeedR); //-----PWMR-----//

    if (L > 0) //-----L Control-----//
    {
        digitalWrite(3, 0);
        digitalWrite(4, 1);
    }
    else 
    {
        digitalWrite(3, 1);
        digitalWrite(4, 0);
    }

    if (R > 0) //-----R Control-----//
    {
        digitalWrite(7, 0);
        digitalWrite(8, 1);
    }
    else 
    {
        digitalWrite(7, 1);
        digitalWrite(8, 0);
    }
}

void MotorStop()
{
    analogWrite(5, 255);
    analogWrite(6, 255);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
}