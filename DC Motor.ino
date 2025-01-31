
const int p1 = 7;
const int p2 = 8;

void setup()
{
    pinMode(p1, OUTPUT);
    pinMode(p2, OUTPUT);
}

void loop()
{
    // start turning
    digitalWrite(p1, HIGH);
    digitalWrite(p2, LOW);

    delay(1000);
    // reverse direction
    digitalWrite(p1, LOW);
    digitalWrite(p2, HIGH);

    delay(1000);
}