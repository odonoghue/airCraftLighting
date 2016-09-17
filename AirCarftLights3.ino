/* 

Blinking lights that shows aircraft navigation and collison for 
warning lights on the runway and during flight.

/*
//pins 11,12 and 13 has an led connected to them, the red is on the left the 
//green on the right and the yellow and the tail and the wing tips.

  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledRed = 13;
int ledGreen = 12;
int ledWhite = 11;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledWhite, OUTPUT);
}
  void loop(){
    

  digitalWrite(ledGreen, HIGH);     // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledRed, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
  delay(100);
  
  
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed, HIGH);
  delay(100);               // wait for a second
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
  delay(1000);      // wait for a second
  
  

  digitalWrite(ledWhite, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(ledWhite, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // wait for a second





}
  
