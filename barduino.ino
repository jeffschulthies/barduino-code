#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)

// our servo # counter
uint8_t servonum = 0;

// 7 Segment LED mappings
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

/*
 * 0 - 0111111 - 0x3F - ABCDEF 
 * 1 - 0000110 - 0x06 - BC
 * 2 - 1011011 - 0x5B - ABDEG 
 * 3 - 1001111 - 0x4F - ABCDG
 * 4 - 1100110 - 0x66 - BCGF
 * 5 - 1101101 - 0x6D - ACDFG
 * 6 - 1111101 - 0x7D - ACDEFG
 * 7 - 0000111 - 0x07 - ABC
 * 8 - 1111111 - 0x7F - ABCDEFG
 * 9 - 1101111 - 0x6F - ABCDFG
 */

byte table[] = {
  B00111111, // 0
  B00000110, // 1
  B01011011, // 2
  B01001111, // 3
  B01100110, // 4
  B01101101, // 5
  B01111101, // 6
  B00000011, // 7
  B01111111, // 8
  B01101111, // 9
};

void setup() {
/*  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
*/
  Serial.begin(9600);
}

void one() {

      
  }
}

// Zero out led score
void clearScreen() {
  Serial.write(table[0]);
  Serial.write(table[0]);
  Serial.write(table[0]);
  Serial.write(table[0]);
}
void loop() {
  // put your main code here, to run repeatedly:
  
}

// Debounce
// Score ball, Disable scoring until button at the top is hit go.
// If bin configuration is different. We could allow multiple balls let it roll out and debounce it that way w/ a delay.

// In case we need a switch
/*
  switch(val) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;

*/
