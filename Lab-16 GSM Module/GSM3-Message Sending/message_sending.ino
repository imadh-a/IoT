#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);

void setup()
{
mySerial.begin(9600);   // Setting the baud rate of GSM Module  
Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
delay(100);
}


void loop()
{
if (Serial.available()>0)
switch(Serial.read())
  {
case 's':
SendMessage();
break;
case 'r':
RecieveMessage();
break;
  }

if (mySerial.available()>0)
Serial.write(mySerial.read());
}

void SendMessage()
{
mySerial.println("AT+CMGF=1");    
delay(1000);  // Delay of 1000 milli seconds or 1 second
mySerial.println("AT+CMGS=\"+919742980606\"\r");  

delay(1000);
mySerial.println("I am SMS from GSM Module");

delay(100);
mySerial.println((char)26);
delay(1000);
}

Void RecieveMessage()
{
mySerial.println("AT+CNMI=2,2,0,0,0");  
delay(1000);
 }
