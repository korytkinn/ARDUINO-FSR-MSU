// Возвращаем отправленное значение через последовательный порт
void setup() {
  //Port13 на выход
  pinMode(13,OUTPUT);
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
}

void iMig(int d) {
  digitalWrite(13,1); delay(d); digitalWrite(13,0); delay(d);
  return;
}

void loop() {
  // Мигаем вначале
  iMig(1000);
  //Ждем данные
  while (Serial.available() == 0);
  //Данные пришли. Мигаем. Получается задержка в 2с.
  iMig(1000);
  //Считываем данные
  int val;
  //val = Serial.read()->'0'
  val = Serial.read();
  //val ='0';
  //Возвращаем данные в порт
  Serial.println(val);

}
