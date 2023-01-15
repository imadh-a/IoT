int LDR = 0; 
int LDRValue = 0;
int light_sensitivity = 500;
int calibrationTime = 30;

long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;

int pirPin = 3;
int ledPin = 11;

void setup()
{
Serial.begin(9600);
pinMode(11, OUTPUT);

pinMode(pirPin, INPUT);
pinMode(ledPin, OUTPUT);
digitalWrite(pirPin, LOW);

Serial.print("calibrating sensor ");

for(int i = 0; i<calibrationTime; i++){
Serial.print(".");
delay(1000);
}
Serial.println(" done");
Serial.println("SENSOR ACTIVE");
delay(50);
}

void loop()
{
LDRValue = analogRead(LDR);
Serial.println(LDRValue);
if(digitalRead(pirPin) == HIGH && LDRValue < light_sensitivity){
digitalWrite(ledPin, HIGH);
if(lockLow){
lockLow = false;
Serial.println("---");
Serial.print("motion detected at ");
Serial.print(millis()/1000);
Serial.println(" sec");
delay(50);
}
takeLowTime = true;
}
if(digitalRead(pirPin) == LOW || LDRValue >= light_sensitivity){
digitalWrite(ledPin, LOW);
if(takeLowTime){
lowIn = millis(); 
takeLowTime = false;
}

if(!lockLow&&millis() - lowIn> pause){

lockLow = true;
Serial.print("motion ended at ");
Serial.print((millis() - pause)/1000);
Serial.println(" sec");
delay(50);
}
delay(100);
}
}