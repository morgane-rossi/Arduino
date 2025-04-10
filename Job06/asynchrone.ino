const int green_led = 1 ;
const int white_led = 2 ;

void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(white_led, OUTPUT);
}

void loop() {
  digitalWrite(green_led, HIGH);
  digitalWrite(white_led, LOW);
  delay(1000);
  digitalWrite(green_led, LOW);
  digitalWrite(white_led, HIGH);
  delay(1000);
}
