int redled=5;
int yellowled=4;
int greenled=3;

void setup()
{  
  
pinMode(redled, OUTPUT);
pinMode(yellowled, OUTPUT);
pinMode(greenled, OUTPUT);

Serial.begin(9600);
while (! Serial); // Wait untilSerial is ready - Leonardo
Serial.println("Enter 'r' to light led or 'x' to clear");
Serial.println("Enter 'Y' to light led or 'x' to clear");
Serial.println("Enter 'G' to light led or 'x' to clear");
}
void loop()
{
if (Serial.available())
{
char ch = Serial.read();
if (ch == 'r')
{
  digitalWrite(redled, HIGH);
  digitalWrite(yellowled, LOW);
  digitalWrite(greenled, LOW);
  
  Serial.println("Enter 'r' to light led or 'x' to clear");
  Serial.println("Turned on RED LED ");

 }
if (ch == 'y')
{
  digitalWrite(redled, LOW);
  digitalWrite(yellowled, HIGH);
  digitalWrite(greenled, LOW);
  
  Serial.println("Enter 'Y' to light led or 'x' to clear");
  Serial.println("Turned on yellow LED ");
}
if (ch == 'g')
{
  digitalWrite(redled, LOW);
  digitalWrite(yellowled, LOW);
  digitalWrite(greenled, HIGH);
  
  Serial.println("Enter 'G' to light led or 'x' to clear");
  Serial.println("Turned on GREEN LED ");
}

if (ch == 'x')
{
digitalWrite(redled, LOW);
digitalWrite(yellowled, LOW);
digitalWrite(greenled, LOW);



Serial.println("Cleared RED LED");
Serial.println("Cleared yellow LED");
Serial.println("Cleared green LED");


}
}
}
