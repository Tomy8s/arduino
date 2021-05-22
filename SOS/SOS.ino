int led = 3;

void setup()
{
    pinMode(led, OUTPUT);
}

int dot()
{
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(150);
}

int dash()
{
    digitalWrite(led, HIGH);
    delay(700);
    digitalWrite(led, LOW);
    delay(150);
}

int s()
{
    dot();
    dot();
    dot();
}

int o()
{
    dash();
    dash();
    dash();
}

void loop()
{
    s();
    o();
    s();
    delay(1000);
}
