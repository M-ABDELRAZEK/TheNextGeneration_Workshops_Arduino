#define IN1 2    // Left Motor IN1
#define IN2 3    // Left Motor IN2
#define IN3 4    // Right Motor IN3
#define IN4 5    // Right Motor IN4
#define ENA 9    // Left Motor Speed Control
#define ENB 10   // Right Motor Speed Control

void setup() {
  // Set motor control pins as output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Set motor enable pins as output
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Start with motors off
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  // Example: Move both motors forward
  moveForward(200);  // Set speed (0-255)
  delay(2000);       // Move forward for 2 seconds

  // Example: Move both motors backward
  moveBackward(200); // Set speed (0-255)
  delay(2000);       // Move backward for 2 seconds

  // Example: Stop motors
  stopMotors();
  delay(2000);       // Stop for 2 seconds
}

// Function to move both motors forward
void moveForward(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);   // Left motor forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);   // Right motor forward
  
  analogWrite(ENA, speed);  // Set left motor speed
  analogWrite(ENB, speed);  // Set right motor speed
}

// Function to move both motors backward
void moveBackward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);  // Left motor backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);  // Right motor backward
  
  analogWrite(ENA, speed);  // Set left motor speed
  analogWrite(ENB, speed);  // Set right motor speed
}

// Function to stop both motors
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);   // Stop left motor
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);   // Stop right motor
  
  analogWrite(ENA, 0);      // Set left motor speed to 0
  analogWrite(ENB, 0);      // Set right motor speed to 0
}
