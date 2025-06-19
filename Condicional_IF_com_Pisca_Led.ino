int t1 = 1000;
int t2 = 300;

void setup() {
  pinMode(5,INPUT_PULLUP);
  pinMode(7,OUTPUT);

}

void loop() {
 if(!digitalRead(5)){ 
  digitalWrite(7,HIGH);
  delay(t1);
  digitalWrite(7,LOW);
  delay(t1);
 }
 if(digitalRead(5)){
 digitalWrite(7,LOW);
 delay(t2);
 digitalWrite(7,HIGH);
 delay(t2);
 }
}
