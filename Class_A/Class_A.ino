int valeurnum;
float tension;

void setup() {
  // put your setup code here, to run once:

// Analogue brushes can only recieve information vs Digital brushes that can Output
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

 valeurnum = analogRead(A0);
 Serial.print("Valeur num = ");
 Serial.println(valeurnum);
 
 float tension = (float) ((valeurnum * 5)/1023);
 Serial.print("Tension = ");
 Serial.print(tension);
 Serial.println(" V");

 if (tension >= 3){
  digitalWrite(13, HIGH);

 }else if ( tension < 3){
  digitalWrite(13, LOW);

 }

 delay(1200);

}
