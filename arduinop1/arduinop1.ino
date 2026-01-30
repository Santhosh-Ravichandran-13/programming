void setup() {
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int val=digitalRead(7);
if(val==LOW){
digitalWrite(13,LOW);
Serial.println(val);
delay(1000);
}
else
digitalWrite(13,HIGH);
Serial.println(val);
delay(1000);
}
