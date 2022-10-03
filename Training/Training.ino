/*
*  Use an KY-016 AND KY-009 RGB color module.
*  Equipment used: - Board Jade Mega
*                  - One LED with 220 Ohm resistors
*                  - Breadboard
*/

#define RED_LED A0
#define GREEN_LED A1
#define BLUE_LED A2

#define RED_LED_KY A3
#define GREEN_LED_KY A4
#define BLUE_LED_KY A5

long randNumberRed = 0;
long randNumberGreen = 0;
long randNumberBlue = 0;

void setup(){
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  randomSeed(analogRead(0));
}

void loop(){
  randNumberRed = random(0, 255);
  randNumberGreen = random(0, 255);
  randNumberBlue = random(0, 255);
  change_color(randNumberRed, randNumberGreen, randNumberBlue);
  delay(500);
  
  randNumberRed = random(0, 255);
  randNumberGreen = random(0, 255);
  randNumberBlue = random(0, 255);
  change_color_KY(randNumberRed, randNumberGreen, randNumberBlue);
  delay(500);
}

void change_color_KY(int redComponent, int greenComponent, int blueComponent){
  analogWrite(RED_LED_KY, redComponent);
  analogWrite(GREEN_LED_KY, greenComponent);
  analogWrite(BLUE_LED_KY, blueComponent);
}


void change_color(int redComponent, int greenComponent, int blueComponent){
  analogWrite(RED_LED, redComponent);
  analogWrite(GREEN_LED, greenComponent);
  analogWrite(BLUE_LED, blueComponent);
}