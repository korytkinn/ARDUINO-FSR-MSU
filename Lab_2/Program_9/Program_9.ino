#define B1 3 // кнопка 1
#define L1 13 // встроенный светодиод

void setup() {
  //Port13 на выход
  pinMode(B1,INPUT);
  pinMode(L1,OUTPUT);
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
}

void loop() {
  bool b1=digitalRead(B1);
  Serial.println(b1);

  }