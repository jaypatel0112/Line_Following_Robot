 void Forward()
  {
    //motor1-clockwise
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    analogWrite(11,255);
    //motor2-anticlockwise
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,255);
  }
    void Left()
  {
    //motor1-anticlockwise
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    analogWrite(11,255);
    //motor2-anticlockwise
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,255);
  }
    void Right()
  {
    //motor1-clockwise
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    analogWrite(11,255);
    //motor2-clockwise
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    analogWrite(10,255);
  }
    void Wait()
  {
    //motor1-clockwise
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    analogWrite(11,0);
    //motor2-clockwise
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    analogWrite(10,0);
  }
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int LS = digitalRead(7);
  int RS = digitalRead(6);
  if(LS==1 && RS==1)
  {
    Forward();
  }
  if(LS==1 && RS==0)
  {
    Right();
  }
  if(LS==0 && RS==1)
  {
    Left();
  }
  if(LS==0 && RS==0)
  {
    Wait();
  }
 
}
