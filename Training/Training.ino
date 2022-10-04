/*
*  Two buzzers are used at the same time.
*  Equipment used: - Board Jade Mega
*                  - Two buzzers
*                  - Breadboard
*/
#define BUZZER1 36
#define BUZZER2 37
  
void setup ()
{
 pinMode(BUZZER1, OUTPUT);
 pinMode(BUZZER2, OUTPUT);
}
  
void loop ()
{
  digitalWrite(BUZZER1, HIGH);
  delay(100);
  digitalWrite(BUZZER1, LOW);
  delay(100);
  digitalWrite(BUZZER2, HIGH);
  delay(100);
  digitalWrite(BUZZER2, LOW);
  delay(100);
}