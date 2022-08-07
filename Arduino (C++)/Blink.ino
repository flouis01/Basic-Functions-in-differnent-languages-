/*
  Name:
    Blink
  Discription:
    This code makes the buildin-LED (Pin 13) Blink with a 1s delay.
*/

#define LED_Buldin 13 //Defines LED_Buildin as 13

void setup(){
  pinMode(LED_Buildin, OUTPUT); //Sets LED_Buildin as output
}

void loop(){
  digitalWrite(LED_Buldin, HIGH); //Sets LED_Buildin High
  delay(1000); //Waits 1000ms
  digitalWrite(LED_Buldin, LOW); //Sets LED_Buildin LOW
  delay(1000); //Waits 1000ms
}
