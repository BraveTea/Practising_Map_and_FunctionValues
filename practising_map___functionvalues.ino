int ledArr[] = {13, 12, 11, 8, 7, 5};
int sensorPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  for (int i = 0; i < 6; i++)
  {
    pinMode(ledArr[i], OUTPUT);
  }
}

void loop()
{
  sensValPrintPercent(sensorPin, 500);
  
  
}

void testsLeds()
{
  for (int i = 0; i < 6; i++)
  {
    digitalWrite(ledArr[i], HIGH);
  }
}

void sensValPrintPercent(int sensor, int beat)
{
  int val;
  int percent;
  val = analogRead(sensorPin);
  percent = map(val, 200, 950, 0, 100);
  sensor = analogRead(sensorPin);
  Serial.print(percent);
  Serial.println("%");
  delay(beat);
}

