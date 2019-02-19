const byte pwm_left = 5; // ENBpin from motor driver to 6th pin of arduino mega -- left motor
const byte pwm_right = 6;
#include <SoftwareSerial.h>
int i = 0 ;

SoftwareSerial mySerial(11, 10); //rx,tx
void setup() {
  // put your setup code here, to run once:
pinMode(31,OUTPUT); //IN1 from motor driver to 28th pin of arduino mega
pinMode(33,OUTPUT); //IN2 from motor driver to 30th pin of arduino mega
pinMode(35,OUTPUT); //IN3 from motor driver to 32nd pin of arduino mega
pinMode(37,OUTPUT); //IN4 from motor driver to 34th pin of arduino mega
Serial.begin(9600);
mySerial.begin(38400);
digitalWrite(31,LOW); //right motor
digitalWrite(33,HIGH);  //right motor
digitalWrite(35,HIGH); // left motor
digitalWrite(37,LOW); //left motor
delay(2000);
}
char c;
String foo = "";
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pwm_left,200);
  analogWrite(pwm_right,200);
  if(mySerial.available())
        {
            c=mySerial.read();
            delay(10);
            foo += c;
      }
      if(foo.length()){
          Serial.println(foo);
          int dir = foo.toInt();
          if ( dir == 4){
                analogWrite(pwm_left,200);
                analogWrite(pwm_right,0);
                Serial.println("right");
            }
           else if (dir == 6){
                 analogWrite(pwm_left,0);
                 analogWrite(pwm_right,200);
                 Serial.println("left");         
            }
 
        }
     delay(500);
     foo = ""; 
}
