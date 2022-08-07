/*
  Name:
    Blink
  Discription:
    This code makes the buildin-LED (Pin 13) Blink with a 1s delay.
*/

#define LED_Buldin 13

void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(LED_Buldin, HIGH);
  delay(1000);
  digitalWrite(LED_Buldin, LOW);
  delay(1000);
}
