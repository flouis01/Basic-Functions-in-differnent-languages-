/*
  Name:
    Potentiometer
  Discription:
    This code makes the buildin-LED Brighter the further the Potentiometer is turned
*/

#define LED_Output 3 //Defines LED_Buildin as 3 (PWM pin)
#define POTI_Input A0 //Defines POTI_Input as A0 

void setup(){
  pinMode(LED_Output, OUTPUT); //Sets LED_Output as output
  pinMode(POTI_Input, INPUT); //Sets POTI_Input as Input
}

void loop(){
  analogWrite(LED_Output, map(analogRead(POTI_Input), 0, 1023, 0, 255)); //Reads the Voltage At POTI_Input, Maps ist (from 0-1023 to 0-255) and writes value to the LED_Output.
}
