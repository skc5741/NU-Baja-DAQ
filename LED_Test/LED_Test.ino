int LED = 14;
int timeDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  digitalWrite(13, HIGH);
  delay(timeDelay);
  digitalWrite(LED, LOW);
  digitalWrite(13, LOW);
  delay(timeDelay);
}
