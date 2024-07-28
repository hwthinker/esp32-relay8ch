#include <Arduino.h>

#define RLY1     23
#define RLY2     32
#define RLY3     33
#define RLY4     25
#define RLY5     27
#define RLY6     12
#define RLY7     14
#define RLY8     35
#define LED      26


void setup() {
  pinMode(RLY1, OUTPUT);  //relay1
  pinMode(RLY2, OUTPUT);  //relay2
  pinMode(RLY3, OUTPUT);  //relay3
  pinMode(RLY4, OUTPUT); //relay4
  pinMode(RLY5, OUTPUT);  //relay1
  pinMode(RLY6, OUTPUT);  //relay2
  pinMode(RLY7, OUTPUT);  //relay3
  pinMode(RLY8, OUTPUT); //relay4
  pinMode(LED, OUTPUT); 
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(RLY1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(RLY1, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);    

  digitalWrite(RLY2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY2, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(RLY3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY3, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(RLY4, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY4, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(RLY5, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY5, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);    

  digitalWrite(RLY6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY6, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(RLY7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY7, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(RLY8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(RLY8, LOW);   // turn the LED off by making the voltage LOW
  delay(1000); 
  
  digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                   // wait for a second
}
