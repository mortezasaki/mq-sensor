// Detect gas leakage with MQ sensor

#define MQ_PIN A0

void setup()
{
  Serial.begin(9600);
  pinMode(MQ_PIN, INPUT);
}

void loop()
{
  int mqValue = analogRead(MQ_PIN);
  Serial.println(mqValue);
  delay(1000);
}
