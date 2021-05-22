int led = 1;  //the pin number of lit LED
int dir = 1;  //the direction of the wave (1 increases, -1 decreases)
int dur = 25; //the time in ms each LED is alight

void setup()
{
    for (int led = 1; led < 14; led += 1)
    {
        pinMode(led, OUTPUT);
    }
}

void loop()
{
    digitalWrite(led, HIGH);
    delay(dur);
    digitalWrite(led, LOW);

    led += dir;

    if (led == 13)
    {
        dir = -1;
    }
    if (led == 1)
    {
        dir = 1;
    }
}
