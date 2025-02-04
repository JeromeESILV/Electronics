int counter;
float Walk;
void setup()
{
  pinMode(A1, INPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Walk = analogRead(A5);

  if (Walk >= 0) {
    digitalWrite(0, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
      digitalWrite(2, HIGH);
      delay(4000); // Wait for 4000 millisecond(s)
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
      digitalWrite(4, HIGH);
  }
}
