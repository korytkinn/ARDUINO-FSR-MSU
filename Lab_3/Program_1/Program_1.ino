int analogPin = A3; // потенциометр 10 кОм (средний вывод) подключен к аналоговому входу A3
// крайние выводы соединены с землей и +5В
int val = 0; // переменная для хранения считанного значения
double volts = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // считываем напряжение с аналогового вход
  volts = 5.0*val/1024;
  Serial.println(volts); // отправляем значение в COM порт.
}