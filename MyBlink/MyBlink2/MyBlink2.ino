int sensorPin = 0;    // The potentiometer is connected to analog pin 0
int ledPin = 13;      // The LED is connected to digital pin 13
int ledPin2 = 12;      // The LED is connected to digital pin 13
void setup()          // this function runs once when the sketch starts up

{
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
}
void loop() // this function runs repeatedly after setup() finishes
{
 int sensorValue;
sensorValue = analogRead(sensorPin);    
digitalWrite(ledPin, HIGH);     // Turn the LED on           
digitalWrite(ledPin2, LOW);      // Turn the LED off
delay(sensorValue);             // Pause for sensor Value milliseconds
digitalWrite(ledPin, LOW);      // Turn the LED off
digitalWrite(ledPin2, HIGH);     // Turn the LED on
delay(sensorValue);             // Pause for sensorValue milliseconds
}

