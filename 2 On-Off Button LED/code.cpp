int buttonL=2;
int buttonR=3;
int led1=4;
int led2=5;
void setup() {
  //  setup code here to run once:
  pinMode(buttonR,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  
}

void loop() {
  //  main code here to run repeatedly:
  if(digitalRead(buttonL)==HIGH)  
  {
   Serial.println("buttonL"); 
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
  }
    
  if(digitalRead(buttonR)==HIGH)
  {
   Serial.println("buttonR"); 
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
  }    
}