int RED2 = 13;
int YELLOW2 = 11;
int GREEN2 = 12;
int RED = 9;
int YELLOW = 10;
int GREEN = 8;
int DELAY_GREEN = 5000;
int DELAY_RED = 5000;
int DELAY_YELLOW = 550;
int Button1 = 3;
int Button1State; 
int Pedest = 2; //pin 2 input
int counter = 0; //counter bit

void setup() {
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT); 
  pinMode(Button1,INPUT);
  pinMode(GREEN2,OUTPUT);
  pinMode(RED2,OUTPUT);
  pinMode(YELLOW2,OUTPUT);
    Serial.begin(9600);
}

void loop() 
{
//Button1State = digitalRead(Button1);
 // if (Button1State == true)
  {
  //digitalWrite(GREEN,LOW);
  //digitalWrite(YELLOW,LOW);
  //digitalWrite(RED,HIGH);
  }
//  else (Button1State != true);

 int currentState = digitalRead(Pedest);
 /*Serial.println(digitalRead(2));
 if(currentState == 1)
 {
    digitalWrite(GREEN,LOW);
    digitalWrite(YELLOW,LOW);
    digitalWrite(YELLOW2,LOW);
    digitalWrite(GREEN2,LOW);
    digitalWrite(RED2,HIGH);
    digitalWrite(RED,HIGH);
    delay(6000);
    
    counter++;
    if(counter == 2);
    {
      counter = 0;
    }
 }

  if(counter == 0)
  {*/
  digitalWrite(GREEN,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(RED2,HIGH);
  digitalWrite(YELLOW2,LOW);
  digitalWrite(GREEN2,LOW);
  delay(DELAY_RED);
  
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(RED,LOW);
  digitalWrite(RED2,HIGH);
  delay(DELAY_YELLOW);
  
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN2,HIGH);
  digitalWrite(RED,HIGH);
  digitalWrite(RED2,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW2,LOW);
  delay(5000);
  
  digitalWrite(GREEN2,LOW);
   digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW2,HIGH);
  digitalWrite(RED,HIGH);
  digitalWrite(RED2,LOW);
  digitalWrite(YELLOW,LOW);
  delay(DELAY_YELLOW);
  //digitalWrite(YELLOW,HIGH);
  
  /*digitalWrite(YELLOW2,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(RED2,HIGH);
  digitalWrite(GREEN2,HIGH);
  digitalWrite(GREEN,LOW);
  delay(5000)
  */
}
