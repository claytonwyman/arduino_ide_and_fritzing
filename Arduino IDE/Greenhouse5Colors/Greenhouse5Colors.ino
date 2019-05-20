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
  
  digitalWrite(11, HIGH);
  graph = 1;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
  digitalWrite(10, HIGH);
  graph = 2;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
  digitalWrite(9, HIGH);
  graph = 3;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
  digitalWrite(6, HIGH);
  graph = 4;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
  digitalWrite(5, HIGH);
  graph = 5;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  graph = 0;
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  Serial.println(graph);
  delay(1000);
}
