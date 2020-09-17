
const int btnPin = 2;
const int ledPinRed = 4;
const int ledPinGrn = 3;

int buttonState = 0;

bool lightRed = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGrn, OUTPUT);
  pinMode(btnPin, INPUT);

  digitalWrite(ledPinRed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(btnPin);

  if(buttonState == HIGH){
    lightRed = !lightRed;

    if(lightRed){
      digitalWrite(ledPinGrn, LOW);
      digitalWrite(ledPinRed, HIGH);
    }
    else{
      digitalWrite(ledPinRed, LOW);
      digitalWrite(ledPinGrn, HIGH);
    }
  }
  

}
