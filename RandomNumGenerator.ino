long randNumber;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  randNumber = random(1, 100);
  Serial.println(randNumber);

  delay(5000);
}
