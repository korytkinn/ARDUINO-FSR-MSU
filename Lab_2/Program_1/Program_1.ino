void setup() {
  //Port13 на выход
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
}

void loop() {
  bool b1=digitalRead(2);
  if(b1) {
    digitalWrite(13,1);
  } else {
    digitalWrite(13,0);
  }
  }