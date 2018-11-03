int LED = 13;
int timeDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(timeDelay);
  digitalWrite(LED, LOW);
  delay(timeDelay);
  

}
