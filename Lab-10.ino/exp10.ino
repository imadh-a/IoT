const int pingPin = 7;
const int echoPin = 6; 
void setup() 
{
 		  Serial.begin(9600);
   		pinMode(pingPin, OUTPUT);
   		pinMode(echoPin, INPUT);
   		pinMode(13,OUTPUT);
}
void loop() 
{
  		 long duration, inches, cm;
   		digitalWrite(pingPin, LOW);
   		delayMicroseconds(2);
  		digitalWrite(pingPin, HIGH);
   		delayMicroseconds(10);
  		digitalWrite(pingPin, LOW);
  		duration = pulseIn(echoPin, HIGH);
   		inches = microsecondsToInches(duration);
   		cm = microsecondsToCentimeters(duration);
   		if(cm < 300)
   	{
      		digitalWrite(13,HIGH);
   	}
else
   	{
   		 digitalWrite(13,LOW);
   	}
   		Serial.print(inches);
   		Serial.print("in, ");
   		Serial.print(cm);
   		Serial.print("cm");
   		Serial.println();
   		delay(100);
}
long microsecondsToInches(long microseconds) 
{
   		return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds) 
{
   		return microseconds / 29 / 2;
}
