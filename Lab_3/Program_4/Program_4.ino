#define L1 13 // встроенный светодиод
#define extL1 3
int analogPin = A3; // потенциометр 10 кОм (средний вывод) подключен к аналоговому входу A3
// крайние выводы соединены с землей и +5В
int val = 0; // переменная для хранения считанного значения
int previousVal = 0;

void setup() {
  pinMode(L1,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // считываем напряжение с аналогового вход
  if (previousVal > val) {
    digitalWrite(L1, 1);
    delay(100);
    digitalWrite(L1, 0);
    delay(100);
  } else
  if (previousVal < val) {
    digitalWrite(extL1, 1);
    delay(100);
    digitalWrite(extL1, 0);
    delay(100);
  }
  previousVal = val;
  Serial.println(val);
}