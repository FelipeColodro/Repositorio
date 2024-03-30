byte led[4] = {1,2,3,4};

void setup()
{
  for(byte pin=0; pin<4; pin++)
  {
    pinMode(led[pin], OUTPUT);
  }
}

void loop()
{
  for(byte s4=0; s4<12; s4++)
  {
    for(int l=0; l<3; l++)
    {
      digitalWrite(led[0], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[3], HIGH);
      delay(100);
    }
    leds_off();
}
}

void leds_off()
{
  for(int f=0; f<8; f++)
  {
    digitalWrite(led[f], LOW);
  }
}
