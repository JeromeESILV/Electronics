int ledPinG = 2; // choose the pin for the LED G
int ledPinR = 3; // LED R
int inPin = 10;   // choose the input pin (for a pushbutton)
int Press = 0;     // variable for reading the pin status

void setup() {
  pinMode(ledPinG, OUTPUT);  // declare LED as output
  pinMode(ledPinR, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT);    // declare pushbutton as input
  Serial.begin(9600);
}

void loop(){
  Press = digitalRead(inPin);  // read input value
   Serial.println(Press);
   
  if(Press == HIGH){
    digitalWrite(ledPinG, LOW);  // turn LED_G Off
    digitalWrite(ledPinR, HIGH); //LED_R on
    delay(100);
  }else{
    digitalWrite(ledPinR, LOW); //LED_R off
    digitalWrite(ledPinG, HIGH); //LED_G flashing for 2 off for 2
    delay(200);
    digitalWrite(ledPinG, LOW);
    delay(200);
  }
}
