int gomb =3;
void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);

}

void loop() {
  Serial.println(digitalRead(3));

}
