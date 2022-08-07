/*
  Name:
    Blink
  Discription:
    This code makes the buildin-LED (Pin 13) Blink with a specified delay.
*/

#define LED_Buldin 13 //Defines LED_Buildin as 13

int delayLength = 500; //Set delay length

void setup(){
  pinMode(LED_Buldin, OUTPUT); //Sets LED_Buildin as output
}

void loop(){
  digitalWrite(LED_Buldin, HIGH); //Sets LED_Buildin High
  delay(delayLength); //Waits set delay
  digitalWrite(LED_Buldin, LOW); //Sets LED_Buildin LOW
  delay(delayLength); //Waits set delay
}
