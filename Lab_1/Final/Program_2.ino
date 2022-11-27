// Возвращаем отправленное значение через последовательный порт
void setup() {
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
  Serial.println("Launched");
  Serial.println("Enter name = ");

}


void loop() {
  while(Serial.available() > 0) {
    delay(1000);
    String name = Serial.readString();
    Serial.println(name);
}
}