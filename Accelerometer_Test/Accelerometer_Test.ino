int rawX = 0;
int rawY = 0;
int rawZ = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(10);
  
  rawX = analogRead(A0);
  rawY = analogRead(A1);
  rawZ = analogRead(A2);

  Serial.print("X:  ");     Serial.print(rawX);
  Serial.print("    Y:  ");     Serial.print(rawY);
  Serial.print("    Z:  ");   Serial.println(rawZ);

  digitalWrite(13, LOW);

  delay(100);
}
