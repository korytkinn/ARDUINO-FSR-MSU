// Возвращаем отправленное значение через последовательный порт
void setup() {
  // Открываем порт на скорости 9600 бод
  Serial.begin(9600);
  Serial.println("Launched");
}


void loop() {
  String innerString = "LINUX";
  while(Serial.available() > 0) {
    String inputString=Serial.readStringUntil('\n');
/*
    for (int i=0; i< innerString.length()-1; i++) {
      if (innerString[i] != inputString[i]) {
        Serial.println("One or more in first five symbols - not equal");
        break;
      }
    }
    */
    if (innerString == inputString) {
      Serial.println("OK");
    } else {
      Serial.println("WRONG");
    }
    if (inputString.length() >= 5) {
      Serial.println("inputString length >= 5");
    } else {
      Serial.println("inputString length < 5");
}
}
}