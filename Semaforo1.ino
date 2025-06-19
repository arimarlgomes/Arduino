int tempo1 = 5000;
int tempo2 = 2000;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  delay(tempo1);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(tempo2);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(tempo1);
  digitalWrite(4,LOW);

}
