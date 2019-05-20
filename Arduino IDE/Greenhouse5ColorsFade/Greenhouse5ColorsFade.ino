void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int graph = 0;
  int fadeValue = 0;
  
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(11, fadeValue);
    delay(50);
    graph = 1;
    Serial.println(graph);
  }
  fadeValue = 0;
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(10, fadeValue);
    delay(50);
    graph = 2;
    Serial.println(graph);
  }
  fadeValue = 0;
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(9, fadeValue);
    delay(50);
    graph = 3;
    Serial.println(graph);
  }
  fadeValue = 0;
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(6, fadeValue);
    delay(50);
    graph = 4;
    Serial.println(graph);
  }
  fadeValue = 0;
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(5, fadeValue);
    delay(50);
     graph = 5;
    Serial.println(graph);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(11, fadeValue);
    analogWrite(10, fadeValue);
    analogWrite(9, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(5, fadeValue);
    delay(50);
    graph = 0;
    Serial.println(graph);
  }
}
