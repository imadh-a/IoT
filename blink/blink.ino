#define pin1 13
#define pin2 11
#define pin3 9
void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);}
  


void loop() {
  digitalWrite(pin1,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  delay(1000);
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin2,LOW);
  delay(1000);
  digitalWrite(pin3,HIGH);
  delay(1000);
  digitalWrite(pin3,LOW);
  delay(1000);

}
