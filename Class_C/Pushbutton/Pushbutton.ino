int ledPin = 2; // choose the pin for the LED
int inPin = 3;   // choose the input pin (for a pushbutton)
int read = 0;     // variable for reading the pin status

void setup() {
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT);    // declare pushbutton as input
}

void loop(){
  read = digitalRead(inPin);  // read input value
  if (read == LOW) {         // check if the input is HIGH (button released)
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH);  // turn LED ON
  }
}
