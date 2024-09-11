int buzzer = 8;

#define R 6
#define G 5
#define B 3
int LDR =0;
void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  tone (buzzer, 100, 1000);
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(500);
  
  tone(buzzer, 300, 1000);
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 0);
  delay(500);
  
  tone(buzzer, 500, 1000);
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(500);
  
  tone(buzzer, 700,1000);
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(500);
  
  tone(buzzer, 900, 1000);
  analogWrite(R, 200);
  analogWrite(G, 2);
  analogWrite(B, 100);
  delay(500);
}