//YouTube | Tech at Home

int led = 12;
int data;

void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  while(Serial.available() > 0)
  {
    data = Serial.read();
    Serial.println(data);
  
    if(data == 'A')
    {
      digitalWrite(12, HIGH);
    }
    if(data == 'B')
    {
      digitalWrite(12, LOW);
    }
    
  }
}
