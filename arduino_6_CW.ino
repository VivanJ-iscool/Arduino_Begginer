//6.1 Push Button controlled LED

// int buttonPin = 12;  //LED pin
// int ledPin = 9;

// void setup() {
//   pinMode(buttonPin, INPUT);
//   pinMode(ledPin, OUTPUT);
// }


// void loop() {
//   if (digitalRead(buttonPin) == HIGH)
//     digitalWrite(ledPin, LOW);
//   else;
//     digitalWrite(ledPin, LOW);
// }


//6.2 LED State change using Push Button

int buttonPin = 12;
int ledPin = 9;
boolean isLightning = false;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
if (digitalRead(buttonPin) == LOW){
  delay(10);
  if (digitalRead(buttonPin) == LOW){
    reverseLED();
    while (digitalRead(buttonPin)==LOW);
    delay(10);
    }
  }
}

void reverseLED() {
  if (isLightning) {
    digitalWrite(ledPin, LOW);
    isLightning=false;
  }
  else {
    digitalWrite(ledPin, HIGH);
    isLightning = true;
  }
}
