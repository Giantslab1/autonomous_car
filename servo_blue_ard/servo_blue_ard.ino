#include<SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial bluetooth(2,3);
Servo myservo;  

int pos = 0;    
void setup() {
  myservo.attach(10);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {

  if(bluetooth.available() > 0)
  {
    char c = bluetooth.read();
  if(c == 'A' && pos <= 0){
    for (pos = 0; pos <= 150; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);                       
  
  }
  }else if( c == 'B' && pos == 151){
    for (pos = 150; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  }
  }
  
  
}
