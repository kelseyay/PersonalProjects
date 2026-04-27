/*
  This code lights up three LEDs one at a time on loop. White LEDs are used in series with a 400 Ohm resistor each.
  This code uses digital pins 26, 28, 30 (very easy to change)


  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
*/


int led0 = 26, led1 = 28, led2 = 30;         // these are the PWM pins the LEDs are attached to


// the setup routine runs once when you press reset:
void setup() {
  // declare the following pins to be outputs and make sure these are what your board is connected to.
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pins
  digitalWrite(led0, HIGH); //This is just how you turn on a pin cool!
  delay(500); //Wait 500 ms
  digitalWrite(led0, LOW); //Then you turn it off
  delay(500);
  digitalWrite(led1, HIGH); //This is just how you turn on a pin cool!
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH); //This is just how you turn on a pin cool!
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);


}
