// Conmemoración con delay del #arduinoday2017, mensaje en código morse para quien se anime a descifrarlo!
// .--. ..- - ---

// LED connected to digital pin 10
int ledPin = 10;

// run once, when the sketch starts
void setup()
{
  // sets the digital pin as output
  pinMode(ledPin, OUTPUT);
}

// run over and over again
void loop()
{
  dit(); dah(); dah(); dit();
  gap();

  dit(); dit(); dah();
  gap();

  dah();
  gap();

  dah(); dah(); dah();

  // wait 5 seconds before repeating the SOS signal
  delay(5000);
}

void dit() {
  digitalWrite(ledPin, HIGH); // sets the LED on
  delay(150); // waits for 150ms
  digitalWrite(ledPin, LOW); // sets the LED off
  delay(100); // waits for 100ms
}

void dah() {
  digitalWrite(ledPin, HIGH); // sets the LED on
  delay(400); // waits for 400ms
  digitalWrite(ledPin, LOW); // sets the LED off
  delay(100); // waits for 100ms
}

void gap() {
  // 100ms delay to cause slight gap between letters
  delay(100);
}

