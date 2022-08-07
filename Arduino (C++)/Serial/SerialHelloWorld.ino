/*
  Name:
    Serial Hello World
  Discription:
    This code sends "Hello World!" using the Serial connection. 
*/

void setup(){
  Serial.begin(9600); //Opens Serial connection and waits until its established
  Serial.println("Hello World!"); //Sends "Hello World!" 
}

void loop(){

}
