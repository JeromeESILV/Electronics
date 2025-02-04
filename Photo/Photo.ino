float T;
int inPin = 4;
int val = 0; 
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  }

void loop(){
val = digitalRead(inPin);  // read input value
  if (val == HIGH) {         // check if the input is LOW (button pushed)
    digitalWrite(2, HIGH);  // turn LED ON
  } else if(val == LOW){
  digitalWrite(2, LOW);
  T = (analogRead(A0)* 5.00 /1023);
  if (T >= 1) {
    digitalWrite(2, HIGH);
  }else {
    digitalWrite(2, LOW);
  }
  Serial.print("Tension = ");
  Serial.print(T);
  Serial.println("V");
  delay(1000);
  }
}
