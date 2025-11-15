int LS=2;
int RS=3;
//กำหนดค่า//
int PWM1=10; //มอเตอร์ด้านขวา
int RM1=4;
int RM2=5;
int PWM2=11;//มอเดอร์ด้านซ้าย
int LM1=6;
int LM2=7;
int speed1=90;//ความเร็วมอเตอร์ด้านขวา
int speed2=90;//ความเร็วมอเตอร์ด้านซ้าย

void setup() {
  pinMode(LS,INPUT);
  pinMode(RS,INPUT);
  pinMode(PWM1,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  pinMode(PWM2,OUTPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
}

void loop() {
  if(digitalRead(LS)==0 and digitalRead(RS)==0)
  {
    analogWrite(PWM1,speed1);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    analogWrite(PWM2,speed2);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
  }
   if(digitalRead(LS)==1 and digitalRead(RS)==0)
  {
    analogWrite(PWM1,speed1);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    analogWrite(PWM2,speed2);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,HIGH);
  }
   if(digitalRead(LS)==0 and digitalRead(RS)==1)
  {
    analogWrite(PWM1,speed1);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,HIGH);
    analogWrite(PWM2,speed2);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
  }
   if(digitalRead(LS)==1 and digitalRead(RS)==1)
  {
    analogWrite(PWM1,speed1);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    analogWrite(PWM2,speed2);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
  }

}
