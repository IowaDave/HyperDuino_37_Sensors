/*************************************************
 * Push_Button | HyperDuino example Code
 * 
 * To demosntrate use of the HyperDuino with the
 * 37 Sensors kit by Elegoo.
 * 
 * Target: Arduino IDE and compatible editors
 * 
 * by David Sparks   June 21, 2018
 **************************************************/

 // Declarations
int buttonState = LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(8, INPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   buttonState = digitalRead(8);
   if (buttonState == HIGH) {
    digitalWrite(13, LOW);
   } else {
    digitalWrite(13, HIGH);
   }  
}
