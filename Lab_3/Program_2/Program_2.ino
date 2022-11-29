#define L1 13 // встроенный светодиод


int analogPin = A3; // потенциометр 10 кОм (средний вывод) подключен к аналоговому входу A3
// крайние выводы соединены с землей и +5В
int val = 0; // переменная для хранения считанного значения
double volts = 0;

void setup() {
  pinMode(L1,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // считываем напряжение с аналогового вход
  volts = 5.0*val/1024;

  if (val < 512) {
    diodMig(L1, 100);
  } else {
    digitalWrite(L1, 1);
  }

  Serial.println(volts); // отправляем значение в COM порт.
}

void diodMig(int port, int time) {
  digitalWrite(port, 1);
  delay(time);
  digitalWrite(port, 0);
  delay(time);
  return;
}