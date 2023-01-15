int value =0;
void setup()
{
  Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(A0,INPUT);
}

void loop()
{
  value = analogRead(A0);
  if(value<200)
  {
digitalWrite(13,HIGH);
    Serial.println("light on");
    Serial.println(value);
  }
  
  else
  {
   digitalWrite(13,LOW);
    Serial.println("light off");
    Serial.println(value);
  }
}