int latch = 11; 
int clock = 12; 
int data= 13; 

int D1 = A0;
int D2 = A5;
int D3 = A1;
int D4 = A4;

const byte table[10]=
{
    B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B11100000,  // 7
  B11111110,  // 8
  B11100110,  // 9
};

void setup() {
  // put your setup code here, to run once:
    pinMode(latch, OUTPUT);
    pinMode(clock, OUTPUT);
    pinMode(data, OUTPUT);
     pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
     pinMode(D4, OUTPUT);
}

void Display1(int num){ 

  digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
     digitalWrite(D1, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num]);
           digitalWrite(latch, 1);

}

void Display4(int num, int num1, int num2, int num3){   
 
delay(5);

    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
    digitalWrite(D1, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num3]);
           digitalWrite(latch, 1);




delay(5);
digitalWrite(D1, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
    digitalWrite(D2, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num2]);
           digitalWrite(latch, 1);


delay(5);
digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D4, 1);
    digitalWrite(D3, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num1]);
           digitalWrite(latch, 1);
  
delay(5);
digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, LSBFIRST, table[num]);
           digitalWrite(latch, 1);

// delay(5);

//    digitalWrite(D4, 1);
//       digitalWrite(D3, 1);
//            digitalWrite(D2, 1);
//            digitalWrite(D1, 1);
    
}

void loop() {
Display4(0, 6, 9, 0);

}
