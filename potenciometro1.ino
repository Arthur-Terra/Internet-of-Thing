void setup() {
    Serial.begin(9600);
}

void loop() {
    int X = analogRead(A0);
    int Y = analogRead(A1);
  
    Serial.print("Posicao X = ");
    Serial.print(X);
    Serial.print(" / Posicao Y = ");
    Serial.println(Y);
  delay(1000);
}
