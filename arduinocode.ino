int ecgPin = 34;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ecgValue = analogRead(ecgPin);
  Serial.println(ecgValue);
  delay(5);
}