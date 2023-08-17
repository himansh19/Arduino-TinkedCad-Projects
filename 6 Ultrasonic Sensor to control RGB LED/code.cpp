// C++ code
int trigpin = 6; // Trigger connected to pin 6
int echopin = 5; // Echo connected to pin 5

int R = 2;
int G = 3;
int B = 4;  
float distance; 
long int duration; 

void setup()  // repeat only once 
{
 
   pinMode(trigpin,OUTPUT);  // Trigger pin set as output
   pinMode(echopin,INPUT);   // Echo pin set as input
   pinMode(R,OUTPUT);
   pinMode(G,OUTPUT);
   pinMode(B,OUTPUT);
  
}

void loop()   // repeat continuously
{
 
  digitalWrite(trigpin, LOW);  // Trig pin cleared (garbage value clear)
  delayMicroseconds(2); // Delay of 2 micro second given
  
  digitalWrite(trigpin, HIGH);//Trig pin set as highi.e signal Transmission
  delayMicroseconds(10);  // delay of 10microsecond
  digitalWrite(trigpin, LOW); // Trig low again  
  	
  	duration = pulseIn(echopin, HIGH); 
  //time between transmission and reception of signal
  
  // calculating distance 
    distance =  .0343 * (duration / 2); 
  // divide by 2 to get one way distance not total
  // .0343 to convert in cm as time come in microsecond 
  
  if(distance > 0 && distance <= 100)
  {
        digitalWrite(G,LOW);
        digitalWrite(B,LOW);
        digitalWrite(R,HIGH);
  }
  
  else if(distance >100 && distance <= 200)
  {
        digitalWrite(R,LOW);
        digitalWrite(G,LOW);
        digitalWrite(B,HIGH);
  }
      
  else if(distance > 200 && distance <= 300 )
  {
        digitalWrite(R,LOW);
        digitalWrite(B,LOW);
        digitalWrite(G,HIGH);
  }
  
}