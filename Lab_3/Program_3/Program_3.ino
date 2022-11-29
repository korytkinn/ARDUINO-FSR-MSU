#define L1 13 // встроенный светодиод
int analogPin = A3; // потенциометр 10 кОм (средний вывод) подключен к аналоговому входу A3
// крайние выводы соединены с землей и +5В
int val = 0; // переменная для хранения считанного значения
int x = 0;
bool valueChanged = false;

void setup() {
  pinMode(L1,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // считываем напряжение с аналогового вход
  if (!valueChanged) {
    if (Serial.available()) {
      x = Serial.parseInt();
    valueChanged = true;
    }
    
  }

  if (x<0) {
      x = 1;
    } else
    if (x>1023) {
      x = 1023;
    }
  
  Serial.println(x);
  if (x-10<val && x+10>val) {
    digitalWrite(L1, 1);
  } else {
    digitalWrite(L1, 0);
  }
}
