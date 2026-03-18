int ledPin = 7;
int microphonePin = 2;

bool ledState = false;
int lastState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(microphonePin, INPUT);
  }

void loop() {
  int currentState = digitalRead(microphonePin);

  if (currentState == HIGH && lastState == LOW){
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(200);
    }

    lastState = currentState;
}
