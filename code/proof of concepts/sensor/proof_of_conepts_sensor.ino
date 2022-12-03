void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 
}

void loop() 
{
  int eersteSensor = analogRead(A0);
  Serial.print(eersteSensor);
  Serial.print("\t");
  
  int TweedeSensor = analogRead(A1);
  Serial.print(TweedeSensor);
  Serial.print("\t");

  int DerdeSensor = analogRead(A2);
  Serial.print(DerdeSensor);
  Serial.print("\t");

  int VierdeSensor = analogRead(A3);
  Serial.print(VierdeSensor);
  Serial.print("\t");
  
  int VijfdeSensor = analogRead(A4);
  Serial.print(VijfdeSensor);
  Serial.print("\t");

  int ZesdeSensor = analogRead(A5); 
  Serial.print(ZesdeSensor);
  Serial.println();

  delay(2000);
}
