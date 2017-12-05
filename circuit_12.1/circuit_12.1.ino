int potPin = A0;
int motorPin = 9;
int potValue = 0;
int motorValue = 0;
void setup() {
 Serial.begin(9600);
}
void loop() {
 potValue = analogRead(potPin);  
 motorValue = map(potValue, 0, 1023, 0, 255);
 analogWrite(motorPin,  potValue/4);  
 Serial.print("potentiometer = " );     
 Serial.print(potValue);
 Serial.print("\t motor = ");
 Serial.println(motorValue);
 delay(2);    
}
