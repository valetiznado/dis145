int d7 = 7;
int d8 = 8;

void setup() {
  pinMode(d7, INPUT_PULLUP);
  pinMode(d8, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  int lecturaX = analogRead(A1);
  int lecturaY = analogRead(A0);


  int x = map(lecturaX, 0, 1023, 1917, 2);
  int y = map(lecturaY, 0, 1023, 2, 1077);


  if (digitalRead(d8) == LOW) {
    Serial.print("c");

  } else {
    Serial.print("z");
  }
  Serial.print(" ");
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.println("m");
  delay(100);
}
