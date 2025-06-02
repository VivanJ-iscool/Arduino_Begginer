const int ledCount=10;   //The Number of LEDs in the Bar Graph

//an array of pin numbers to which LEDs are attached
int ledPins[] = {3,4,5,6,7,8,9,10,11,12};

void setup() {
  //loop over the pin array and sets them all to output
  for (int i = 0; i < ledCount; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
//makes the "i"th LED of LED bar graph right in turn
  for (int i = 0; i < ledCount; i++){
    barGraphDisplay(i);
  }
//makes the "i"th LED of LED Bar Graph bright IN REVERSE
  for (int i = ledCount; i>0; i--){
    barGraphDisplay(i - 1);
  }
}


void barGraphDisplay(int ledOn){
  //make the "ledOn"th LED of LED bar gaph on and the others off
  for (int i=0; i<ledCount; i++) {
    if(i== ledOn)
      digitalWrite(ledPins[i], HIGH);
    else
      digitalWrite(ledPins[i], LOW);
  }

  delay(100);

}