// Возвращаем отправленное значение через последовательный порт
void setup() {
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
  Serial.println("Launched");
  Serial.println("Enter integer = ");

}


void loop() {
  while(Serial.available() > 0) {
    int number = Serial.parseInt();
    Serial.print("Number = ");
    Serial.print(number);
    delay(1000);
    while(true);
}
}