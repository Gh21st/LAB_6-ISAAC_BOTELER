// constants won't change. Used here to set a pin number:
const int LED_1 = 3;  // the number of the LED pin
const int LED_2 = 4; 

void setup() {
  // set the digital pin as output:
  pinMode(LED_2, OUTPUT);
  pinMode(LED_1, OUTPUT);
}

void loop() {

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  delay(500);
  digitalWrite(LED_1, LOW);
  delay(500);
  digitalWrite(LED_1, HIGH);
  delay(500);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  delay(500);
}
