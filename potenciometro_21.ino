void setup() {
    Serial.begin(9600);
}

void loop() {
    int X = analogRead(A0);
    int Y = analogRead(A1);
  
  
  if (X <500){
  	Serial.print("Esquerda");
  }else{
  	Serial.print("Direita");
  }
  
  if (Y < 143 && Y > 839) {
    Serial.print(" / Baixo");
  }else{
  	Serial.println(" / Cima");
  }
  
  
  
  
  delay(1000);
}
