// Simple traffic lights

const int red = 11; // 11,12,13 main road
const int yellow = 12;
const int green = 13;
int swt = 2; // switch instead of sensor for now
const int red1 = 8; // 8,9,10 secondary road
const int yellow1 = 9;
const int green1 = 10;

// sets the pins 8-13 as outputs, pin 2 as input, switch goes to ground
// Initialise safe state
void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(swt, INPUT_PULLUP);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1,  HIGH); 
}

// creates the loop that your Arduino will repeat over & over //
void loop(){
  changeLights();
}

// Function that will change lights in Irish traffic lights system
void changeLights()          // to be sure, to be sure, to be sure
{
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1,  HIGH); 
  delay(10000);

  while(swt = HIGH)
  { 
  

  // Changing to favour side road
  // turn off green, then turn yellow on for 5 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(5000);
  // turn off yellow, then turn red on
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(2000);

  //turn off red1, then turn on green1
  digitalWrite(red1, LOW);
  digitalWrite(green1, HIGH);
  delay(10000);
  }
  while(swt = LOW);
  {
  

  // turn off green1, then turn yellow1 on for 5 seconds
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  delay(5000);
  // turn off yellow1, then turn red1 on
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);
  delay(2000);
  }

}
