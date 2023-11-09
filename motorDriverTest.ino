//Motor driver test

// Motor A connections
int motorPin1 = 2;  // Connect to L298N IN1
int motorPin2 = 3;  // Connect to L298N IN2
int pwm = 5;

void setup() {
  // Set the motor control pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(pwm,OUTPUT);
  analogWrite(pwm,255);
}

void loop() {
  // Rotate the motor clockwise
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(1000);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(1000);
}
