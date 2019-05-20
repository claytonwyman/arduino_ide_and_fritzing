void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  int value = analogRead(A0) - 650;

  Serial.println(sensorValue);
  delay(100);
  
  if (sensorValue > 650) {
      digitalWrite(2, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
    } else if (sensorValue > 500) {
      digitalWrite(2, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(6, LOW);
    } else {
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
  }
  tone(9, value, analogRead(A0) - 100);
}
