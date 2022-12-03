const int Drukknop = 3;
const int Led = 9;
bool toestand_Led = LOW;

void setup() 
{
  pinMode(Drukknop, INPUT_PULLUP);
  pinMode(Led, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Drukknop), aan, RISING);
}

void loop() 
{
   digitalWrite(Led, toestand_Led);
}

void aan() 
{
  toestand_Led = !toestand_Led;
}