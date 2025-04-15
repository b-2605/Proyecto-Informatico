#define ledr 3
#define ledg 6
#define ledb 5
#define led2r 9
#define led2g 10
#define led2b 11

void setup()
{
 
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{ analogWrite(led2b,200);
  delay(1000);
  analogWrite(led2b,0);
  delay(1000);
  analogWrite(led2r,200);
  delay(1000);
  analogWrite(led2r,0);
   delay(1000);
  analogWrite(led2g,200);
  delay(1000);
  analogWrite(led2g,0);
   delay(1000);
 
  analogWrite(ledb,200);
  delay(1000);
  analogWrite(ledb,0);
  delay(1000);
  analogWrite(ledr,200);
  delay(1000);
  analogWrite(ledr,0);
   delay(1000);
  analogWrite(ledg,200);
  delay(1000);
  analogWrite(ledg,0);
   delay(1000);
}