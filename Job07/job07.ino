const int blue_un = 1 ;
const int yell_un = 2 ;
const int green_un = 3 ;
const int white_un = 4 ;
const int blue_deux = 5 ;
const int yell_deux = 6 ;
const int green_deux = 7 ;
const int white_deux = 8 ; 

void setup() {
  pinMode(blue_un, OUTPUT);
  pinMode(yell_un, OUTPUT);
  pinMode(green_un, OUTPUT);
  pinMode(white_un, OUTPUT);
  pinMode(blue_deux, OUTPUT);
  pinMode(yell_deux, OUTPUT);
  pinMode(green_deux, OUTPUT);
  pinMode(white_deux, OUTPUT);
}

void loop() {
  digitalWrite(blue_un, HIGH);
  delay(1000);
  digitalWrite(blue_un, LOW);
  digitalWrite(yell_un, HIGH);
  delay(1000);
  digitalWrite(yell_un, LOW);
  digitalWrite(green_un, HIGH);
  delay(1000);
  digitalWrite(green_un, LOW);
  digitalWrite(white_un, HIGH);
  delay(1000);
  digitalWrite(white_un, LOW);
  digitalWrite(blue_deux, HIGH);
  delay(1000);
  digitalWrite(blue_deux, LOW);
  digitalWrite(yell_deux, HIGH);
  delay(1000);
  digitalWrite(yell_deux, LOW);
  digitalWrite(green_deux, HIGH);
  delay(1000);
  digitalWrite(green_deux, LOW);
  digitalWrite(white_deux, HIGH);
  delay(1000);
  digitalWrite(white_deux, LOW);
}
