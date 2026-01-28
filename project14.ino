#include <math.h>
double result = 0;
long Base = 0;
long Exponent = 0;
long a = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Base = 0;   
  Exponent = 0;  
  Serial.flush(); 
  while (Serial.available() == 0)
  {
  }
  while (Serial.available() > 0)
  {
    Base = Base * 10; 
    a = Serial.read() - '0';
    Base = Base + a;
    delay(5);
  }
  while (Serial.available() == 0)
  {
  }
  while (Serial.available() > 0)
  {
    Exponent = Exponent * 10; 
    a = Serial.read() - '0';
    Exponent = Exponent + a;
    delay(5);
  }
  Serial.print("You entered: ");
  Serial.println(Base);
  Serial.print("You entered: ");
  Serial.println(Exponent);

  Serial.print(Base);
  Serial.print(" to the power of ");
  Serial.println(Exponent);
result = pow(Base, Exponent);
  Serial.println(result);
}