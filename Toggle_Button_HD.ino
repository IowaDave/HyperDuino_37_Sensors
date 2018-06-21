/*******************************************************
 * Toggle Button | HyperDuino Example Code
 * 
 * To demonstrate using Roger Wagner's Hyperduino
 * with the 37 Sensors 2.0 kit by Elegoo.
 * 
 * Target: Arduino IDE and compatible editors
 * 
 * David Sparks    June 21, 2018
 ********************************************************/
// Declarations
int ledState;
int buttonState;

void setup() {
  // initialize pin modes and turn the LED off
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  ledState = LOW;
  digitalWrite(13, LOW);
}

void loop() {
  // Check the button state. Act only if it is LOW,
  // indicating button is being pushed down.
  buttonState = digitalRead(8);
  if (buttonState == LOW) {
    // The button has been pushed down.
    // Reverse the state of the LED
    // and save the state in a variable
    if (ledState == LOW) {
      ledState = HIGH;
      digitalWrite(13, HIGH);
    } else {
      ledState = LOW;
      digitalWrite(13, LOW);
    }
  // Wait for button to be released.
  while (digitalRead(8) == LOW) {}
  }
}
