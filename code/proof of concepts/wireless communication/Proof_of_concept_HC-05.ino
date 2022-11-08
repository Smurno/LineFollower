int ledPin = 13;
int state = 0;
int flag = 0;
int LED = 8;
void setup ()
{
  pinMode (ledPin, OUTPUT);
  digitalWrite (ledPin, LOW);
  pinMode (LED, OUTPUT);
  digitalWrite(LED, LOW);
  Serial1.begin (9600);
  while (!Serial1);
  }
  
  void loop()
  {
    if (Serial1.available()>0)
    {
      state = Serial1.read();
      }
      
      if (state == '0')
      {
        digitalWrite(ledPin, LOW);
        Serial1.println("LED: off");
        state = 0;
      }
          
      if (state == '1')
      {
        digitalWrite(ledPin, HIGH);
        Serial1.println("LED: on");
        state = 0;
      }
  }