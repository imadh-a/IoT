int ledpin1 = 9;
int ledpin2 = 6;
void setup(){
}

void loop()
{
int fadevalue1 =0;
int fadevalue2 =255;
  
 while(fadevalue1 <=255&& fadevalue2>=0)
 {
  analogWrite(ledpin1,fadevalue1);
  analogWrite(ledpin2,fadevalue2);
  fadevalue1 +=5;
  fadevalue2 -=5;
  delay(70);
 }
  
  fadevalue1 =255;
  fadevalue2 =0;
  while(fadevalue1>=0 && fadevalue2<=255)
  {
  analogWrite(ledpin1,fadevalue1);
  analogWrite(ledpin2,fadevalue2);
  fadevalue1 -=5;
  fadevalue2 +=5;
  delay(70);
  }
}
