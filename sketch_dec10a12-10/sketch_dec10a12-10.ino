int lPin = 13;
void setup() {
pinMode(lPin,OUTPUT);
}

void loop() {
  
  //T
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);
    
  delay(100);
  //H
  for(int i=0; i<4; i++)
  {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  delay(100);
  
  //A
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);

  //N
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);

  //K
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);

  //S
    for(int i=0; i<3; i++)
    {
      digitalWrite(lPin,HIGH);
      delay(150);
      digitalWrite(lPin,LOW);
      delay(100);
    }
  delay(2000);

}
