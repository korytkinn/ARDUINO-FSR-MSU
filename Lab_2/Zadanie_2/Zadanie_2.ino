
// the setup function runs once when you press reset or power the board
byte b1;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(14,INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  b1=digitalRead(14);
  if(b1==1) {
    digitalWrite(13,1);
  } else {
    digitalWrite(13,0);
  }
  }