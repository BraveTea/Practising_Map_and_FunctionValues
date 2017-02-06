int ledArr[] = {13, 12, 11, 8, 7, 5};
int lightPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  for (int i = 0; i < 6; i++)
  {
    pinMode(ledArr[i], OUTPUT);
  }
}

void loop()
{
  sensValPrintPercent(lightPin, 500);
}

void testsLeds()
{
  for (int i = 0; i < 6; i++)
  {
    digitalWrite(ledArr[i], HIGH);
  }
}

void sensValPrintPercent(int sensorPin, int beat)
{
  int val;
  int percent;
  int sensor;
  val = analogRead(sensorPin);
  percent = map(val, 200, 950, 0, 100);
  sensor = analogRead(sensorPin);
  Serial.print(percent);
  Serial.println("%");
  delay(beat);
}
