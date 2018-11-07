int rawX;
int rawY;
int rawZ;
double voltX;
double voltY;
double voltZ;
double accelX;
double accelY;
double accelZ;

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

  voltX = ((double)rawX)/1023*3.3;
  voltY = ((double)rawY)/1023*3.3;
  voltZ = ((double)rawZ)/1023*3.3;

  accelX = (voltX - 2.19)*(4.41);
  accelY = (voltY - 2.2)*(4.41);
  accelZ = (voltZ - 2.25)*(4.41);

  Serial.print("rawX:  ");       Serial.print(rawX);
  Serial.print("    rawY:  ");   Serial.print(rawY);
  Serial.print("    rawZ:  ");   Serial.print(rawZ);

  Serial.print("        voltX:  ");   Serial.print(voltX);
  Serial.print("    voltY:  ");       Serial.print(voltY);
  Serial.print("    voltZ:  ");       Serial.print(voltZ);

  Serial.print("        accelX:  ");   Serial.print(accelX);
  Serial.print("    accelY:  ");       Serial.print(accelY);
  Serial.print("    accelZ:  ");       Serial.print(accelZ);

  Serial.println();

  digitalWrite(13, LOW);

  delay(100);
}
