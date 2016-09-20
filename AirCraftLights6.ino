
  #define HIGH
  #define LOW

 int navLights(digitalWrite(HIGH); digitalWrite(LOW));
 
 int ledRed = 13;
 int ledGreen = 12;
 int ledWhite = 11;
 
  void setup(){

  navLights(digitalWrite(HIGH); (LOW));
 
    
    
  pinMode(ledGreen, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(ledRed, OUTPUT);
  
  return;
  
} 
 
  
  int navLights (digitalWrite(HIGH); digitalWrite(LOW)){
 
  void loop(){

  digitalWrite(ledGreen, HIGH);     // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledRed, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
  delay(1000);
  
  
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed, HIGH);
  delay(100);               // wait for a second
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
  delay(100);      // wait for a second
  
  

  digitalWrite(ledWhite, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(ledWhite, LOW);    // turn the LED off by making the voltage LOW
  delay(10);

  }
   
  }

  
  

