
int led1Pin = 4;
int led2Pin = 5;

void setup() {
  // put your setup code here, to run once:
pinMode(led1Pin, OUTPUT);
pinMode(led2Pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
setLed1(HIGH);    //set LED1 on, and LED2 off
setLed1(LOW);     //set LED1 off, and LED2 on
}
void setLed1(int led1)  {
  digitalWrite(led1Pin, led1);    //the state of LED1 is determined by variable led1

  if (led1 == HIGH)        //the state of LED2 is determined by variable led1
    digitalWrite(led2Pin, LOW);    //if LED1 is turned on, LED2 will be turned off

  else
    digitalWrite(led2Pin, HIGH);    //if LED1 is turned off, LED2 will be turned on

  ;delay(1000)    //wait for a sec

;}