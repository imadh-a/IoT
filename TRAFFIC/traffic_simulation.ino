void setup()
{
  pinMode(11, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  
  
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  
       
}

