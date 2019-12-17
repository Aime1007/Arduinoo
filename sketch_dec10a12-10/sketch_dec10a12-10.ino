int lPin = 13;
void setup() {
pinMode(lPin,OUTPUT);
}


  void SHORT() {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  void LONG() {
    digitalWrite(lPin,HIGH);
    delay(400);
    digitalWrite(lPin,LOW);
    delay(100);
  }
  void letterA() {
    SHORT();
    LONG();
  }
  void letterB() {
    LONG();
    SHORT();
    SHORT();
    SHORT();
  }
  void letterC() {
    LONG();
    SHORT();
    LONG();
    SHORT();
  }
  void letterD() {
    LONG();
    SHORT();
    SHORT();
  }
  void letterE() {
    SHORT();
  }
  void letterF() {
    SHORT();
    SHORT();
    LONG();
    SHORT();
  }
  void letterG() {
    LONG();
    LONG();
    SHORT();
  }
  void letterH() {
    SHORT();
    SHORT();
    SHORT();
    SHORT();
  }

  void letterI() {
    SHORT();
    SHORT();
  }
  
  void letterJ() {
    SHORT();
    LONG();
    LONG();
    LONG();
  }
  void letterK() {
    LONG();
    SHORT();
    LONG();
  }
  void letterL() {
    SHORT();
    LONG();
    SHORT();
    SHORT();
  }
  void letterM() {
    LONG();
    LONG();
  }
  void letterN() {
    LONG();
    SHORT();
  }

  void letterO() {
    LONG();
    LONG();
    LONG();
  }
  
  void letterP() {
    SHORT();
    LONG();
    LONG();
    SHORT();
  }
  void letterQ() {
    LONG();
    LONG();
    SHORT();
    LONG();
  }
  void letterR() {
    SHORT();
    LONG();
    SHORT();
  }
  void letterS() {
    SHORT();
    SHORT();
    SHORT();
  }
  void letterT() {
    LONG();
  }

  void letterU() {
    SHORT();
    SHORT();
    LONG();
  }
  
  void letterV() {
    LONG();
    SHORT();
    SHORT();
    SHORT();
    LONG();
  }
  void letterW() {
    SHORT();
    LONG();
    LONG();
  }
  void letterX() {
    LONG();
    SHORT();
    SHORT();
    LONG();
  }
  void letterY() {
    LONG();
    SHORT();
    LONG();
    LONG();
  }
  
  void letterZ() {
    LONG();
    LONG();
    SHORT();
    SHORT();
  }

void loop() {
  String a="hello";
  for(int i=0; i<a.length(); i++) {
    if(a[i]=='h'||a[i]=='H') {
      letterH();
    }
    if(a[i]=='e'||a[i]=='E') {
      letterE();
    }
    if(a[i]=='l'||a[i]=='L') {
      letterL();
    }
    if(a[i]=='o'||a[i]=='O') {
      letterO();
    }
  }
  delay(2000);

}
