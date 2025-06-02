int buttonPin = 9  //LED pin
boolean isLighting  //defines a variable to save LED state

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin)) == LOW {  //if button's pressed
    delay(10);
    if (digitalRead(buttonPin)) == LOW {  //double check for button press
      reverseLED()  //reverse LED











    }
  }
}