#define B1 2 // кнопка 1
#define B2 3 // кнопка 2
#define L1 13 // встроенный светодиод
#define extL1 7 // внешний светодиод № 1

void setup() {
  //Port13 на выход
  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
  pinMode(L1,OUTPUT);
  pinMode(extL1, OUTPUT);
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
}

void loop() {
  bool b1=digitalRead(B1);
  bool b2=digitalRead(B2);

  if(b1 == true) {
    digitalWrite(L1,1); 
    //digitalWrite(L1,1);
  } else {
    //digitalWrite(L1,0);
    digitalWrite(L1,0); 
  }
  if(b2 == true) {
    digitalWrite(extL1,1); 
  } else {
    digitalWrite(extL1,0); 
  }
  }