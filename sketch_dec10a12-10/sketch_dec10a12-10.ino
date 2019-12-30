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
    if(a[i]=='a'||a[i]=='A') {
      letterA();
    }
    if(a[i]=='b'||a[i]=='B') {
      letterB();
    }
    if(a[i]=='c'||a[i]=='C') {
      letterC();
    }
    if(a[i]=='d'||a[i]=='D') {
      letterD();
    }
    if(a[i]=='e'||a[i]=='E') {
      letterE();
    }
    if(a[i]=='f'||a[i]=='F') {
      letterF();
    }
    if(a[i]=='g'||a[i]=='G') {
      letterG();
    }
    if(a[i]=='h'||a[i]=='H') {
      letterH();
    }
    if(a[i]=='i'||a[i]=='I') {
      letterI();
    }
    if(a[i]=='j'||a[i]=='J') {
      letterJ();
    }
    if(a[i]=='k'||a[i]=='K') {
      letterK();
    }
    if(a[i]=='l'||a[i]=='L') {
      letterL();
    }
    if(a[i]=='m'||a[i]=='M') {
      letterM();
    }
    if(a[i]=='n'||a[i]=='N') {
      letterN();
    }
    if(a[i]=='o'||a[i]=='O') {
      letterO();
    }
    if(a[i]=='p'||a[i]=='P') {
      letterP();
    }
    if(a[i]=='q'||a[i]=='Q') {
      letterQ();
    }
    if(a[i]=='r'||a[i]=='R') {
      letterR();
    }
    if(a[i]=='s'||a[i]=='S') {
      letterS();
    }
    if(a[i]=='t'||a[i]=='T') {
      letterT();
    }
    if(a[i]=='u'||a[i]=='U') {
      letterU();
    }
    if(a[i]=='v'||a[i]=='V') {
      letterV();
    }
    if(a[i]=='w'||a[i]=='W') {
      letterW();
    }
    if(a[i]=='x'||a[i]=='X') {
      letterX();
    }
    if(a[i]=='y'||a[i]=='Y') {
      letterY();
    }
    if(a[i]=='z'||a[i]=='Z') {
      letterZ();
    }
  }
  delay(2000);

}
