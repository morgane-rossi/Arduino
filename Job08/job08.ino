int led = 3 ;
int brightness = 0 ;
int increase = 2 ;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);

brightness = brightness + increase ;

  if (brightness <= 0 || brightness >= 250){
    increase = -increase;
  }

  delay(100);
}
