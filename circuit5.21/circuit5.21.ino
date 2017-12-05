 int button1Pin = 2;  // pushbutton 1 pin
int button2Pin = 3;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin


void setup()
{
  // Set up the pushbutton pins to be an input:
pinMode(button1Pin, INPUT);
  
  pinMode(button2Pin, INPUT);

  // Set up the LED pin to be an output:
  pinMode(ledPin, OUTPUT);      

}
void loop()
{
  int button1State, button2State;  // variables to hold the pushbutton states

  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  
  if (((button1State == LOW) || (button2State == LOW))  // if we're pushing button 1 OR button 2
      && !                                               // AND we're NOT
      ((button1State == LOW) && (button2State == LOW))) // pushing button 1 AND button 2
                                                        // then...
  {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  }
  else
  {
    digitalWrite(ledPin, LOW);  // turn the LED off
  }
       
}
