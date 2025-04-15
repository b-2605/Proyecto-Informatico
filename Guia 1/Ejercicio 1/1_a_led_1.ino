// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(7, 1);
  delay(9000); 
  digitalWrite(7, 0);
  delay(200); 
  digitalWrite(8, 1);
  delay(1000); 
  digitalWrite(8, 0);
  delay(200); 
  digitalWrite(9, 1);
  delay(9000); 
  digitalWrite(9, 0);
  delay(100); 
  digitalWrite(8, 1);
  delay(1000); 
  digitalWrite(8, 0);
  delay(200); 
}