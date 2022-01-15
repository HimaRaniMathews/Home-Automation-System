
int buzzer = 10;
int smokeA0 = A5;
int redled = 2;
int blueled = 3;
// Your threshold value. You might need to change it.
int sensorThres = 100;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(blueled,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    tone(buzzer, 1000, 200);
    digitalWrite(redled,HIGH);
    digitalWrite(blueled,LOW);
  }
  else
  {
    noTone(buzzer);
    digitalWrite(blueled,HIGH);
    digitalWrite(redled,LOW);
  }
  delay(100);
}
