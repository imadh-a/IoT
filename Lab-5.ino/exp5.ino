int ledPin = 9;  
void setup()
{
Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop()
{
 int analogValue = analogRead(A0);
  int brightness = map(analogValue,0,1023,0,255);
  analogWrite(ledPin,brightness);
  Serial.print("Analog");
  Serial.print(analogValue);
  Serial.print("brightness");
  Serial.print(brightness);
  delay(100);
}