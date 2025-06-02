//5.1: LED- Levels of Brightness

//setup LED pin nums:
// int ledPin1 = 5,
//   ledPin2 = 6,
//   ledPin3 = 9,
//   ledPin4 = 10;

// void setup() {
//  //initialize the LED pin as an output:
//   pinMode(ledPin1, OUTPUT);
//   pinMode(ledPin2, OUTPUT);
//   pinMode(ledPin3, OUTPUT);
//   pinMode(ledPin4, OUTPUT);
// }

// void loop() {
//   //set the ports output PWM (Pulse Width Modulation connection) waves w/ diff duty cycles
//   analogWrite(ledPin1, map(2,0,100,0,255));
//   analogWrite(ledPin2, map(10,0,100,0,255));
//   analogWrite(ledPin3, map(50,0,100,0,255));
//   analogWrite(ledPin4, map(100,0,100,0,255));


// }

//5.2: LED Blink Smoothly

int ledPin = 5;  //number of the LED pin
void setup() {
  //initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}


void loop() {
  //call breath() cyclically
  breath(ledPin, 6);
  delay(500);
}

void breath(int ledPin, int delayMs){
  for (int i=0; i<=255; i++){  //"i" change from 0 to 255
    analogWrite(ledPin, i);  //corresponding duty cycle changes from 0%-100%
    delay(delayMs); //adjust rate of change in brightness
  }

  for (int i=255; i>=0; i--){  //"i" change from 255 to 0
    analogWrite(ledPin, i); //corresponding duty cycle changes from 0%-100%
    delay(delayMs); //adjust the rate of change in brightness



  }


  }





