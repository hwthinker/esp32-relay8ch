#include <Arduino.h>  

#define RLY1     32  //ok
#define RLY2     33  //ok 
#define RLY3     25  //ok 
#define RLY4     26  //ok
#define RLY5     27  //ok
#define RLY6     14   //ok
#define RLY7     12  //ok
#define RLY8     13  //ok
#define LED      23 //ok


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
  digitalWrite(RLY1, HIGH);  
  delay(1000);               
  digitalWrite(RLY1, LOW);   
  delay(1000);    

  digitalWrite(RLY2, HIGH);  
  delay(1000);                      
  digitalWrite(RLY2, LOW);   
  delay(1000);   

  digitalWrite(RLY3, HIGH);  
  delay(1000);                      
  digitalWrite(RLY3, LOW);   
  delay(1000);   

  digitalWrite(RLY4, HIGH);  
  delay(1000);                      
  digitalWrite(RLY4, LOW);   
  delay(1000);   

  digitalWrite(RLY5, HIGH);  
  delay(1000);                      
  digitalWrite(RLY5, LOW);   
  delay(1000);    

  digitalWrite(RLY6, HIGH);  
  delay(1000);                      
  digitalWrite(RLY6, LOW);   
  delay(1000);   

  digitalWrite(RLY7, HIGH);  
  delay(1000);                     
  digitalWrite(RLY7, LOW);   
  delay(1000);   

  digitalWrite(RLY8, HIGH);  
  delay(1000);                      
  digitalWrite(RLY8, LOW);   
  delay(1000); 
  
  digitalWrite(LED, HIGH);  
  delay(1000);                      
  digitalWrite(LED, LOW);  
  delay(1000);                  
}
