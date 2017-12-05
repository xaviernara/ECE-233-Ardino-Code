
int redled=13;
int yellowled=12;
int greenled=11;
int redled2=10;
int yellowled2=9;
int greenled2=8;
void loop() 

{

 digitalWrite (redled, 1);
 delay(9000);
   digitalWrite (redled, 0);  
   digitalWrite (yellowled, 1); 
   delay (3000); // yellowled lights for 3 sec.
   digitalWrite (yellowled, 0);
    digitalWrite (greenled, 1);
   delay (9000);
   digitalWrite (greenled, 0);// greenled start flashing
   delay (500);
   digitalWrite (greenled, 1);
   delay (500);    
   digitalWrite (greenled, 0);
   delay (500);
   digitalWrite (greenled, 1);
   delay (500);
   digitalWrite (greenled, 0);
   delay (500);
   digitalWrite (greenled, 1);
   delay (500);
   digitalWrite (greenled, 0);
   delay (500);
   digitalWrite (greenled, 1);
   delay (500);
   digitalWrite (greenled, 0);
 
 
   
    
}

