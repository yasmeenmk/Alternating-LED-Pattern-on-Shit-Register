/*






*/

//Alternating LED Pattern using a Shift Register

const int SER =8;   //Serial Output to Shift Register
const int LATCH =9; //Shift Register Latch Pin
const int CLK =10;  //Shift Register Clock Pin

void setup()
{
  //Set pins as outputs
 pinMode(SER, OUTPUT);
 pinMode(LATCH, OUTPUT);
 pinMode(CLK, OUTPUT);

 digitalWrite(LATCH, LOW);                //Latch Low
 shiftOut(SER, CLK, MSBFIRST, B11110000); //Shift Most Sig. Bit First
 digitalWrite(LATCH, HIGH);               //Latch High - Show pattern
}

void loop()
{
 //Do nothing
}