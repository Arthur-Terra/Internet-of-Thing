
int buzzer =4;
void setup()
{ 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
  tone(buzzer, 100, 1000);
  digitalWrite(8, 1);
  delay(1000);
  digitalWrite(8, 0);

  noTone(buzzer);
  delay(500); 
  tone(buzzer, 500, 1000);
  digitalWrite(9, 1);
  delay(1000); 
  digitalWrite(9, 0);
    
  noTone(buzzer);
  delay(500);
  tone(buzzer, 1000, 1000);
  digitalWrite(10, 1);
  delay(1000);
  digitalWrite(10, 0);
    
  noTone(buzzer);
  delay(500);
  tone(buzzer, 1500, 1000);
  digitalWrite(11, 1);
  delay(1000);
  digitalWrite(11, 0);
  
  noTone(buzzer);
  delay(500);
  tone(buzzer, 2000, 1000);
  digitalWrite(12, 1);
  delay(1000); 
  digitalWrite(12, 0);
    
  noTone(buzzer);
  delay(500);
}