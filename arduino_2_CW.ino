void setup() {
  // put your setup code here, to run once:
//initialize digital pin 13 as an output
pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH); //turn the LED on (HIGH= Voltage level)
delay(1000);  //1000 mili-secs= 1 sec
digitalWrite(13, LOW);  //turn LED of by making low voltage
delay(1000);
}
