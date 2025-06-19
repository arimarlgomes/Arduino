int tempo1 = 200;
int tempo2 = 500;
int tempo3 = 5000;

void setup() {
  pinMode (2, INPUT_PULLUP);
  pinMode (4, OUTPUT);
  digitalWrite(4,HIGH);
}

void loop() {
  if (!digitalRead (2)) {
    digitalWrite(4,LOW); //Para escrever nível alto na saída digital
    delay(tempo3);
    
    
  }
  else {
    digitalWrite(4,HIGH); //Para escrever nível alto na saída digital
    
  }
  
}
