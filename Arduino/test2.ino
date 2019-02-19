const byte pwm_left = 6;
const byte pwm_right = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(31,OUTPUT); //IN1 from motor driver to 28th pin of arduino mega
pinMode(33,OUTPUT); //IN2 from motor driver to 30th pin of arduino mega
pinMode(35,OUTPUT); //IN3 from motor driver to 32nd pin of arduino mega
pinMode(37,OUTPUT); //IN4 from motor driver to 34th pin of arduino mega
Serial.begin(9600);
digitalWrite(31,LOW); //right motor
digitalWrite(33,HIGH);  //right motor
digitalWrite(35,HIGH); // left motor
digitalWrite(37,LOW); //left motor
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(pwm_left,0);
 analogWrite(pwm_right,200);
 delay(7530);
 analogWrite(pwm_left,200);
 analogWrite(pwm_right,200);
 delay(2150);
 analogWrite(pwm_left,0);
 analogWrite(pwm_right,200);
 delay(8640);
 analogWrite(pwm_left,200);
 analogWrite(pwm_right,200);
 delay(2000);
 analogWrite(pwm_left,0);
 analogWrite(pwm_right,200);
 delay(8620);
 analogWrite(pwm_left,200);
 analogWrite(pwm_right,200);
 delay(3010);
 analogWrite(pwm_left,0);
 analogWrite(pwm_right,200);
 delay(8060);
 analogWrite(pwm_left,200);
 analogWrite(pwm_right,200);
 delay(1960);
 

}
