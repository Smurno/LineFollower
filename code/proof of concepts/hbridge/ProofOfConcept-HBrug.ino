#define AIN1 9
#define AIN2 10
#define BIN1 13
#define BIN2 11

void setup() 
{}

void loop() 
{
  for(int k = 0; k<255; k+=10)        //Motor 1 versnellen richting 1
   {analogWrite (AIN1,k);
    delay(100);}

  for(int k =255 ; k>= 0; k-=10)      //Motor 1 vertragen richting 1
   {analogWrite(AIN1,k);
    delay(100);}

   for(int k = 0; k<255; k+=10)        //Motor 1 versnellen richting 2
   {analogWrite (AIN2,k);
    delay(100);}

  for(int k =255 ; k>= 0; k-=10)      //Motor 1 vertragen richting 2
   {analogWrite(AIN2,k);
    delay(100);}

  for(int k = 0; k<255; k+=10)        //Motor 2 versnellen richting 1
   {analogWrite (BIN1,k);
    delay(100);}

  for(int k =255 ; k>= 0; k-=10)       //Motor 2 vertragen richting 1
   {analogWrite(BIN1,k);
    delay(100);}

   for(int k = 0; k<255; k+=10)        //Motor 2 versnellen richting 2
   {analogWrite (BIN2,k);
    delay(100);}

  for(int k =255 ; k>= 0; k-=10)        //Motor 2 vertragen richting 2
   {analogWrite(BIN2,k);
    delay(100);}

}