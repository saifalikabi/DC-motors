#include <AFMotor.h>
 
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
 pinMode(A0,INPUT);  
}
 
void loop() {

  
  
    int potentiometerVal = analogRead(A5);
    
  Serial.println(potentiometerVal);
  
  int potValue = map(potentiometerVal,0,1023,0,80);
    Serial.println(potValue);

  delay (2);
  
  motor1.run(FORWARD);    
  motor1.setSpeed(potValue);
  
  motor2.run(BACKWARD);    
  motor2.setSpeed(potValue);
  
  delay(1);
  

}
