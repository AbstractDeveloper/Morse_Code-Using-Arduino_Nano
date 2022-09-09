// Coded By - Sahil Guglani
/*
   Morse Code of My Name is -
   S: ...
   A: .-
   H: ....
   I: ..
   L: .-..
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void loop() {
  // put your main code here, to run repeatedly:
  // For letter 'S'
  dot();
  dot();
  dot();
  delay(900);

  // For letter 'A'
  dot();
  dash();
  delay(900);

  // For letter 'H'
  dot();
  dot();
  dot();
  dot();
  delay(900);

  // For letter 'I'
  dot();
  dot();
  delay(900);

  // For letter 'L'
  dot();
  dash();
  dot();
  dot();
  delay(900);
}
