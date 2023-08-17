#include <LiquidCrystal.h>
#include <Keypad.h>

int RS = 8, EN = 9, D4 = 10, D5 = 11, D6 = 12, D7 = 13;
LiquidCrystal lcd (RS, EN, D4, D5, D6, D7);

const byte ROWS = 4;
const byte COLS = 4;

char key[ROWS][COLS] = {
  {'1','2','3','U'},
  {'4','5','6','E'}, 
  {'7','8','9','I'},
  {'*','0',' ','T'},
};
byte rowPins[ROWS] = {7,6,5,4};
byte colPins[COLS] = {3,2,1,0};

Keypad keypad = Keypad(makeKeymap(key), rowPins, colPins, ROWS, COLS);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);  //move cursor to 1st row and 1st column
  lcd.print("HimanshuAggarwal");
  lcd.setCursor(1,1);  // move cursor to 2nd row and 2nd column
  
}

void loop()
{
  
  char key = keypad.getKey();
  if(key){
    if(key == '*') {
      lcd.clear();   // to clear the screen and give new output
      delay(600);
      
      lcd.setCursor(0,0);
  	  lcd.print("HimanshuAggarwal");
      
      lcd.setCursor(1,1);
    }
    else {
      lcd.print(key);
    }
  } 
}