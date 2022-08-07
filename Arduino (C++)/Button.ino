/*
  Name:
    Button
  Discription:
    This code makes the buildin-LED turn on if the BTN_Input pin is HIGH and turns it off after that. 
*/

#define LED_Buldin 13 //Defines LED_Buildin as 13
#define BTN_Input 2 //Defines BTN_Input as 2 

void setup(){
  pinMode(LED_Buldin, OUTPUT); //Sets LED_Buildin as output
  pinMode(BTN_Input, INPUT_PULLUP); //Sets BTN_Input as Input
}

void loop(){
  if(digitalRead(BTN_Input) == HIGH){ //Checks if the button return HIGH or LOW to the BTN_Input pin
    digitalWrite(LED_Buldin, HIGH); //Sets LED_Buildin High
  }else{
    digitalWrite(LED_Buldin, LOW); //Sets LED_Buildin Low
  }
}
