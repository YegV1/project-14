long number = 0;
long a = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  number = 0;     
  Serial.flush(); 
  while (Serial.available() == 0)
  {
  }
  while (Serial.available() > 0)
  {
    number = number * 10; 
    a = Serial.read() - '0';
    number = number + a;
    delay(5);
  }
  Serial.print("You entered: ");
  Serial.println(number);
  Serial.print(number);
  Serial.print(" multiplied by two is ");
  number = number * 2;
  Serial.println(number);
}