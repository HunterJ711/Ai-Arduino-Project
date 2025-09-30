int ledPin = 13;
int pirPin = 12;
int pirValue;

void setup() {
  pinMode(ledPin, OUTPUT);  // LED is output
  pinMode(pirPin, INPUT);   // PIR sensor is input
  digitalWrite(ledPin, LOW);

  Serial.begin(9600);       // optional, for debugging
}

void loop() {
  pirValue = digitalRead(pirPin); // read PIR sensor
  digitalWrite(ledPin, pirValue); // set LED ON if motion detected

  Serial.println(pirValue);       // optional, see 1=motion, 0=no motion
  delay(100);                     // small delay to avoid flooding serial monitor
}

