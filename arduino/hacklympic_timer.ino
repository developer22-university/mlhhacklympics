#include <LiquidCrystal.h>                 //includes the library code of LCD in aurdino
#include <NewPing.h>
#include <Servo.h>


const int trigger = 9;  // D2 trigger Pin
const int echo = 8;     // D3 echo Pin
const int max_dist = 200; // max distance 200 cm
const int led = 13;       // Build-in led
int dist=0;
NewPing sonar(trigger, echo, max_dist);
Servo myservo; 
int pos = 0;
unsigned long time;

long int seconds=0;

int minutes=0;

int hours=0;

LiquidCrystal LCD(11, 12, 5, 4, 3, 2);  //RS,EN,D4,D5,D6,D7 pin of LCD respectively

 

void setup()

{

Serial.begin(9600);                   //initiates serial communication
 myservo.attach(7);
LCD.begin(16, 2);     //sets the number of columns and rows

}

void loop()

{
dist=sonar.ping_cm();
setClock();         //function
LCD.setCursor(0,0);
LCD.print("Hacklympic Timer"); 
LCD.setCursor(0,1);     //sets the cursor to 0th column and 1st row,numbering starts from 0

{

if(hours<10)        //suppose 4

{

LCD.print("0");     //LCD first prints 0 and stopwatch shows 0

LCD.print(hours);       //LCD then prints 4. So value printed is 04 stopwatch shows 04

}

else

{

LCD.print(hours);

}

}

LCD.print(":");

{

if(minutes<10)

{

LCD.print("0");

LCD.print(minutes);

LCD.print(":");

}

else

{

LCD.print(minutes);

LCD.print(":");

}

}

 

{

if(seconds<10)

{
LCD.print("0");
LCD.print(seconds);
}

else

{

LCD.print(seconds);

}

 

}
if(dist<30)
{
  LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Your Timing");
  LCD.setCursor(0,1);
  LCD.print(hours);
  LCD.print(":");
  LCD.print(minutes);
  LCD.print(":");
  LCD.print(seconds);
  while(true){
     for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  }
  }
}

void setClock()

{

seconds++;       //counts seconds from 0

delay(1000);     //a delay of 1000 milliseconds is given for each second count

if (seconds>59)

{

seconds=0;      //whenever second is greater than 59 than second is made equal to

minutes++;     // zero and a minute is counted for it

}

if (minutes>59)

{hours++;

minutes=0;

}

 

if(hours>23)

{

hours=0;

}

 

}
