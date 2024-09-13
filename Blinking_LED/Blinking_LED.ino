// Define the LED pin
int ledPin = 13;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  
  // Wait for 1 second
  delay(1000);
}
