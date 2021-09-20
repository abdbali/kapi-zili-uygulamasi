int buton=2;
int buzzer=3;
int led=4;
int butondurumu=0;
void setup() {
 pinMode(buton,INPUT);
 pinMode(buzzer,OUTPUT);
 pinMode(led,OUTPUT);
}
void loop() {
butondurumu=digitalRead(buton);
if(butondurumu==HIGH)
{
 digitalWrite(led,HIGH);
 tone(buzzer,523);
 delay(500);
 tone(buzzer,262);
 delay(500);
 tone(buzzer,330);
 delay(500);
 tone(buzzer,440);
 delay(500);
}
else
{
 digitalWrite(led,LOW);
 noTone(buzzer);
}}