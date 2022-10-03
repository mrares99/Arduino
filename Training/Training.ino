/*
*  The purpose of this project is to turn off or on three LEDs using for each of them a button.
*  Equipment used: - Board Jade Mega
*                  - Two buttons with 10k Ohm resistors
*                  - Three LEDs with 220 Ohm resistors
*                  - Breadboard
*/

#define RED_LED 26
#define BLUE_LED 27
#define GREEN_LED 28

#define BUTTON_RED_LED 34
#define BUTTON_BLUE_LED 35

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_RED_LED, INPUT);
  pinMode(BUTTON_BLUE_LED, INPUT);
}

void loop() {
  if(digitalRead(BUTTON_RED_LED) == HIGH){
    digitalWrite(RED_LED, HIGH);
  }
  else{
    digitalWrite(RED_LED, LOW);
  }

  if(digitalRead(BUTTON_BLUE_LED) == HIGH){
    digitalWrite(BLUE_LED, HIGH);
  }
  else{
    digitalWrite(BLUE_LED, LOW);
  }

}





