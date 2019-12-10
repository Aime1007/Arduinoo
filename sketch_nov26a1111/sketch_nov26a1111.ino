int lPin = 13;
void setup() {
pinMode(lPin,OUTPUT);
}

void loop() {
  
  for(int y=0; y<3; y++)
  {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  for(int x=0; x<3; x++)
  {
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  delay(100);
  for(int y=0; y<3; y++)
  {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  delay(2000);


}
