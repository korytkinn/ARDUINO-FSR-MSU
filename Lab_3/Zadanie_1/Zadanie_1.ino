int analogPin = A3; // потенциометр 10 кОм (средний вывод) подключен к аналоговому входу A3
// крайние выводы соединены с землей и +5В
int val = 0; // переменная для хранения считанного значения

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // считываем напряжение с аналогового входа
  Serial.println(val); // отправляем значение в COM порт.
}