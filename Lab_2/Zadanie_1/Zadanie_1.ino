
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Enter mig count = ");
}

// the loop function runs over and over again forever
void loop() {
  int i = 1;
  int count = Serial.parseInt();
  while (i<=count) {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);         
    Serial.print("mig number ");             // wait for a second
    Serial.println(i);
    i++;
  }

}
