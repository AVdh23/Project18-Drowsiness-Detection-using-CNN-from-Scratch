int buzzer = 11;
int data;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  while (Serial.available() > 0)
  {
    data = Serial.read();
    Serial.println(data);

    if (data == 'A')
    {
      digitalWrite(buzzer, HIGH); // Activate the buzzer
    }
    if (data == 'B')
    {
      digitalWrite(buzzer, LOW); // Deactivate the buzzer
    }
  }
}
