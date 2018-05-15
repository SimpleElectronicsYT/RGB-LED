
/*
 * This code is written by SimpleElectronics (www.YouTube.com/SimpleElectronics) 
 * and is free to use, modify, distribute etc... 
 * This is not likely to be amazing code form, style or fomality, but it does
 * work and that's what I was aiming for.
 * 
 * Always remeber: having fun and learning are the two most important aspects of life.
 */
const int RedPin = 9; // Sets the pin for the Red colour
const int GreenPin = 10; // Sets the pin for the Green colour
const int BluePin = 11; // Sets the pin for the Blue colour

int WaitTime = 5000; // Sets the delay before the next colour swap (in milliSeconds)

int RandomRed = 0; 
// The code will use this variable to set a strenght to the Red LED
int RandomGreen = 0; 
// The code will use this variable to set a strenght to the Green LED
int RandomBlue = 0; 
// The code will use this variable to set a strenght to the Red LED

void setup() {

  pinMode(RedPin, OUTPUT); 
  // This allows us to use the pin assigned to Red as an output
  digitalWrite(RedPin, HIGH); 
  // This ensures that the pin assigned to Red starts at a known state
  // Change the HIGH to a LOW if your LEDs use a common ground, 
  //leave as-is if your LEDs use a common power

  pinMode(GreenPin, OUTPUT); 
  // This allows us to use the pin assigned to Green as an output
  digitalWrite(GreenPin, HIGH); 
  // This ensures that the pin assigned to Green starts at a known state
  // Change the HIGH to a LOW if your LEDs use a common ground, 
  // leave as-is if your LEDs use a common power

  pinMode(BluePin, OUTPUT); 
  // This allows us to use the pin assigned to Blue as an output
  digitalWrite(BluePin, HIGH); 
  // This ensures that the pin assigned to Blue starts at a known state
  // Change the HIGH to a LOW if your LEDs use a common ground, 
  // leave as-is if your LEDs use a common power

}

void loop() {

  RandomRed = random(256); 
  // Generates a random value from 0 to 255 to set the brightness of the Red LED
  RandomGreen = random(256); 
  // Generates a random value from 0 to 255 to set the brightness of the Green LED
  RandomBlue = random(256); 
  // Generates a random value from 0 to 255 to set the brightness of the Blue LED

  analogWrite(RedPin, RandomRed); 
  // This now turns on the Red LED at the value generated at the previous step
  analogWrite(GreenPin, RandomGreen); 
  // This now turns on the Green LED at the value generated at the previous step
  analogWrite(BluePin, RandomBlue); 
  // This now turns on the Blue LED at the value generated at the previous step

  delay(WaitTime); 
  // Now the program waits for the amount of milliSeconds set at the start of the program
  // before restarting the process again
}
