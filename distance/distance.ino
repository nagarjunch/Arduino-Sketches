#define LEDPIN 13
#define TRIGPIN 10
#define ECHOPIN 9

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  float duration, distance;
  digitalWrite(TRIGPIN, HIGH);
  delay(1);
  digitalWrite(TRIGPIN, LOW);
  duration = pulseIn(ECHOPIN, HIGH);
  distance = duration / 58.138;

  

  if(distance > 0 && distance < 50) {
    Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
    digitalWrite(LEDPIN, HIGH);
  } else {
    digitalWrite(LEDPIN, LOW);
  }
  delay(60);
}
