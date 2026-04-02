// constants won't change. Used here to set a pin number:
const int ledPin = 3;  // the number of the LED pin

// Variables will change:
int ledState = LOW;  // ledState used to set the LED

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {

    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
}
