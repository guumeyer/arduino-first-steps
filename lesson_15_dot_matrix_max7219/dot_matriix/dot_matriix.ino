#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to LOAD(CS)
 pin 10 is connected to the CLK 
 We have only a single MAX72XX.
 */
#define PIN_DATA_IN 12
#define PIN_LOAD_CS 11
#define PIN_CLK 10
#define BOARD_NUMBER 1
 
const LedControl lc= LedControl(PIN_DATA_IN, PIN_CLK, PIN_LOAD_CS, BOARD_NUMBER);
/* we always wait a bit between updates of the display */
unsigned long delaytime1=700;
unsigned long delaytime2=20;
unsigned long delaytime3=500;

const byte clean[1] = {B00000000};
const byte dash[5] = {B00000000,B00010000,B00010000,B00010000,B00010000};
const byte j[5]={B11111110,B00000001,B00000001,B00000001,B00000110};
const byte a[5]={B01111111,B10001000,B10001000,B10001000,B01111111};  
//const byte m[5]={B11111100,B01000000,B00100000,B01000000,B11111100};
const byte m[5]={B11111111,B01000000,B00110000,B01000000,B11111111};
const byte o[5]={B01111110,B10000001,B10000001,B10000001,B01111110};
  
const byte r[5]={B00010000,B00100000,B00100000,B00010000,B00111110};
const byte d[5]={B11111110,B00010010,B00100010,B00100010,B00011100};
const byte u[5]={B00111110,B00000100,B00000010,B00000010,B00111100};
const byte i[5]={B00000000,B00000001,B10111110,B00100000,B00000000};
const byte n[5]={B00011110,B00100000,B00100000,B00010000,B00111110};
const byte h[5]={B00000000,B00000000,B00011111,B00100000,B11111111};

const byte t[5]={B00100000,B00100001,B11111110,B00100000,B00100000};
const byte s[5]={B01000110,B10001001,B10010001,B10010001,B01100010};
const byte heart[8]={B0011000,B0100100,B1000010,B0100001,B1000010,B0100100,B0011000,B0000000};

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}


void drawDash() {
  lc.setRow(0,0,dash[0]);
  lc.setRow(0,1,dash[1]);
  lc.setRow(0,2,dash[2]);
  lc.setRow(0,3,dash[3]);
  lc.setRow(0,4,dash[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void cleanScreen() {
  lc.clearDisplay(0);
}

void drawJ() {
  lc.setRow(0,0,j[0]);
  lc.setRow(0,1,j[1]);
  lc.setRow(0,2,j[2]);
  lc.setRow(0,3,j[3]);
  lc.setRow(0,4,j[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawO() {
  lc.setRow(0,0,o[0]);
  lc.setRow(0,1,o[1]);
  lc.setRow(0,2,o[2]);
  lc.setRow(0,3,o[3]);
  lc.setRow(0,4,o[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawM() {
  lc.setRow(0,0,m[0]);
  lc.setRow(0,1,m[1]);
  lc.setRow(0,2,m[2]);
  lc.setRow(0,3,m[3]);
  lc.setRow(0,4,m[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawH() {
  lc.setRow(0,0,h[0]);
  lc.setRow(0,1,h[1]);
  lc.setRow(0,2,h[2]);
  lc.setRow(0,3,h[3]);
  lc.setRow(0,4,h[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}
void drawA() {
  lc.setRow(0,0,a[0]);
  lc.setRow(0,1,a[1]);
  lc.setRow(0,2,a[2]);
  lc.setRow(0,3,a[3]);
  lc.setRow(0,4,a[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawS() {
  lc.setRow(0,0,s[0]);
  lc.setRow(0,1,s[1]);
  lc.setRow(0,2,s[2]);
  lc.setRow(0,3,s[3]);
  lc.setRow(0,4,s[4]);  
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawT() {
  lc.setRow(0,0,t[0]);
  lc.setRow(0,1,t[1]);
  lc.setRow(0,2,t[2]);
  lc.setRow(0,3,t[3]);
  lc.setRow(0,4,t[4]);  
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawI() {
  lc.setRow(0,0,i[0]);
  lc.setRow(0,1,i[1]);
  lc.setRow(0,2,i[2]);
  lc.setRow(0,3,i[3]);
  lc.setRow(0,4,i[4]);
  lc.setRow(0,5,clean[0]);
  lc.setRow(0,6,clean[0]);
  lc.setRow(0,7,clean[0]);
}

void drawHeart() {
  lc.setRow(0,0,heart[0]);
  lc.setRow(0,1,heart[1]);
  lc.setRow(0,2,heart[2]);
  lc.setRow(0,3,heart[3]);
  lc.setRow(0,4,heart[4]);
  lc.setRow(0,5,heart[5]);
  lc.setRow(0,6,heart[6]);
  lc.setRow(0,7,heart[7]);  
}

void blinkDash(long delaytime) {
  cleanScreen();
  delay(delaytime);
  rows();
  delay(delaytime);
  cleanScreen();
  delay(delaytime);  
}

void drawTaisa(long delaytime) {
  drawT();
  delay(delaytime);
  drawA();
  delay(delaytime);
  drawI();
  delay(delaytime);
  drawS();
  delay(delaytime);
  drawA();
  delay(delaytime);  
}

void drawJoao(long delaytime) {
  drawJ();
  delay(delaytime1);
  drawO();
  delay(delaytime1);
  drawA();
  delay(delaytime1);
  drawO();
  delay(delaytime1); 
}

void drawThomas(long delaytime) {
  drawT();
  delay(delaytime1);
  drawH();
  delay(delaytime1);
  drawO();
  delay(delaytime1);
  drawM();
  delay(delaytime1); 
  drawA();
  delay(delaytime1); 
  drawS();
  delay(delaytime1); 
}

void writeArduinoOnMatrix() {
  blinkDash(delaytime3);

 
  // taisa
  drawTaisa(delaytime1);


  // heart
  blinkDash(delaytime2);
  drawHeart();
  delay(delaytime3);

  // Joao
  drawJoao(delaytime1);

  // heart
  blinkDash(delaytime2);
  drawHeart();
  delay(delaytime3);

  // thomas
  drawThomas(delaytime1);

  blinkDash(delaytime3);
  blinkDash(delaytime3);

  // heart
  drawHeart();
  delay(delaytime3);
  rows();
  delay(delaytime3);
  drawHeart();
  delay(delaytime3);
}

/*
  This function lights up a some Leds in a row.
 The pattern will be repeated on every row.
 The pattern will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void rows() {
  for(int row=0;row<8;row++) {
    delay(delaytime2);
    lc.setRow(0,row,B10100000);
    delay(delaytime2);
    lc.setRow(0,row,(byte)0);
    for(int i=0;i<row;i++) {
      delay(delaytime2);
      lc.setRow(0,row,B10100000);
      delay(delaytime2);
      lc.setRow(0,row,(byte)0);
    }
  }
}

/*
  This function lights up a some Leds in a column.
 The pattern will be repeated on every column.
 The pattern will blink along with the column-number.
 column number 4 (index==3) will blink 4 times etc.
 */
void columns() {
  for(int col=0;col<8;col++) {
    delay(delaytime2);
    lc.setColumn(0,col,B00100000);
    delay(delaytime2);
    lc.setColumn(0,col,(byte)0);
    for(int i=0;i<col;i++) {
      delay(delaytime2);
      lc.setColumn(0,col,B00100000);
      delay(delaytime2);
      lc.setColumn(0,col,(byte)0);
    }
  }
}

/* 
 This function will light up every Led on the matrix.
 The led will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void single() {
  for(int row=0;row<8;row++) {
    for(int col=0;col<8;col++) {
      delay(delaytime2);
      lc.setLed(0,row,col,true);
      delay(delaytime2);
      for(int i=0;i<col;i++) {
        lc.setLed(0,row,col,false);
        delay(delaytime2);
        lc.setLed(0,row,col,true);
        delay(delaytime2);
      }
    }
  }
}

void loop() { 
  writeArduinoOnMatrix();
  rows();
  columns();
  single();
}
