// Defining pins of seven segment
int E = 5;
int D = 4;
int C = 3;
int DP = 2;
int B = 9;
int A = 8;
int F = 7;
int G = 6;

void Funcall(int j)
{
  switch (j)
 {
  case 0:  				// Case to print 0
   digitalWrite(E,LOW);
   digitalWrite(D,LOW);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,HIGH);
   delay(1000);
   break;  

  case 1:  				// Case to print 1
   digitalWrite(E,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,HIGH);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   delay(1000);
   break;

  case 2:  				// Case to print 2
   digitalWrite(E,LOW);
   digitalWrite(D,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,LOW);
   delay(1000);
   break;

  case 3:  				// Case to print 3
   digitalWrite(E,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,LOW);
   delay(1000);
   break;

  case 4:  				// Case to print 4
   digitalWrite(E,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,HIGH);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   delay(1000);
   break;

  case 5:  				// Case to print 5
   digitalWrite(E,HIGH);
   digitalWrite(D,LOW);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(A,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   delay(1000);
   break;   

  case 6:  				// Case to print 6
   digitalWrite(E,LOW);
   digitalWrite(D,LOW);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,HIGH);
   digitalWrite(A,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   delay(1000);
   break;  

  case 7:  				// Case to print 7
   digitalWrite(E,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,HIGH);
   digitalWrite(G,HIGH);
   delay(1000);
   break;

  case 8:  				// Case to print 8
   digitalWrite(E,LOW);
   digitalWrite(D,LOW);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   delay(1000);
   break;

  case 9:  				// Case to print 9
   digitalWrite(E,HIGH);
   digitalWrite(D,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(DP,HIGH);
   digitalWrite(B,LOW);
   digitalWrite(A,LOW);
   digitalWrite(F,LOW);
   digitalWrite(G,LOW);
   delay(1000);
   break;
 }
}

void setup()
{
 pinMode(E, OUTPUT);
 pinMode(D, OUTPUT);
 pinMode(C, OUTPUT);
 pinMode(DP, OUTPUT);
 pinMode(B, OUTPUT);
 pinMode(A, OUTPUT);
 pinMode(F, OUTPUT);
 pinMode(G, OUTPUT);
}

void loop()  // repeat continuously
{
  int i;
  for (i=0;i<10;++i) // loop for counting from 0 to 9
  {
    Funcall(i);      // pass value of i to Funcall
  }
  
  for (i=9;i>=0;--i) // loop for counting from 9 to 0
  {
    Funcall(i);      // pass value of i to Funcall
  }
   
}