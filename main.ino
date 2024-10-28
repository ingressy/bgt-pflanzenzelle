const int Sonne = 12;
const int Mond = 11;
const int Sauerstoff = 10;
const int Kohlenstoffdioxid = 9;

void setup() {
  pinMode(Sonne, OUTPUT);
  pinMode(Mond, OUTPUT);
  pinMode(Sauerstoff, OUTPUT);
  pinMode(Kohlenstoffdioxid, OUTPUT);
}

void loop() {
  tag();
  nacht();
}

void tag() {
  digitalWrite(Sonne, HIGH);
  delay(2000);
  digitalWrite(Kohlenstoffdioxid, HIGH);

  delay(5000);
  digitalWrite(Sauerstoff, HIGH);
  delay(8000);

  digitalWrite(Sauerstoff, LOW);
  digitalWrite(Sonne, LOW);
  digitalWrite(Kohlenstoffdioxid, LOW);
}

void nacht() {
  digitalWrite(Mond, HIGH);
  digitalWrite(Kohlenstoffdioxid, HIGH);
  delay(10000);
  digitalWrite(Kohlenstoffdioxid, LOW);
  digitalWrite(Mond, LOW);
}
