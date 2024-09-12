// Define pins for motor driver
const int IN1 = 2;     // IN1 of L298N
const int IN2 = 3;     // IN2 of L298N
const int ENA = 9;     // Enable Pin A for motor speed control (PWM)

void setup() {
  // Set all pins as OUTPUT
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  // Motor spins forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Set speed (range: 0-255)

  delay(2000); // Run forward for 2 seconds

  // Motor spins backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 150);  // Set speed (range: 0-255)

  delay(2000); // Run backward for 2 seconds

  // Motor stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);    // Set speed to 0 (stop motor)

  delay(2000); // Stop for 2 seconds
}
