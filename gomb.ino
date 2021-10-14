int gomb =3;
int fenyero =50;
int intenzitas=0;
void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);

}

void loop() {
 
  if (digitalRead(3)==0)
  {
   delay(100);
   if (digitalRead(3)==0) {
    Serial.println("Megnyomtak! Üdv, a Gomb!");
    fenyero+=10;
    if (fenyero>=100) fenyero=0;
    }
    intenzitas = map(fenyero,0,100,0, 255);
    analogWrite(2,intenzitas);
  }
  
}
