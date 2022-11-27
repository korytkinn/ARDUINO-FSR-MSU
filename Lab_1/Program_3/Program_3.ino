// Возвращаем отправленное значение через последовательный порт
void setup() {
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
  Serial.println("Launched");
  Serial.println("Enter integer = ");

}


void loop() {
  while(Serial.available() > 0) {
    delay(1000);
    int number = Serial.parseInt();
    Serial.print(number);
    Serial.print("  ");
    Serial.print(number, BIN);
    Serial.print("  ");
    Serial.print(number, OCT);
    Serial.print("  ");
    Serial.print(number, HEX);
    Serial.print("  ");
    while(true);
}
}