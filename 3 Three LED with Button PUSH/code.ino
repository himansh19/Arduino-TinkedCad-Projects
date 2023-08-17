// C++ code
//

int buttonState = 0;
void setup()
{
  pinMode(7, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
}

void loop()
{
  buttonState=digitalRead(7);
  
  digitalWrite(2, buttonState);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s) i.e 1s
  
  digitalWrite(2, LOW);
  digitalWrite(3, buttonState);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s) i.e 1s
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, buttonState);
  delay(1000); // Wait for 1000 millisecond(s) i.e 1s
  
  
}