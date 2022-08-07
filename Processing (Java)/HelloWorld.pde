/*
  Name:
    Hello World!
  Discription:
    Writes "Hello World!" in the middel of the window and prints "Hello World!" to the Console.
*/

void setup(){
  size(300, 300); //Set window size (*width, *height)
  background(255); //Set windows background color (*color)
  fill(0); //Set Text color (*color)
  textAlign(CENTER, CENTER); //set text alignment (*horizontal, vertical)
  textSize(24); //set text size (*size)
  text("Hello World!", width / 2, height / 2); //Display text (*String, *width, *height)
  println("Hello World!"); //Print text to Console (*String)
}
