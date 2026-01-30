void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  Serial.begin(9600);
}
void loop() {
int i;
int val=digitalRead(2);

if(val==LOW){
  for(i=1;i<=15;i=i+2){
  digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   delay(1000);
   Serial.println(i);
}
  for(i=16;i<=30;i=i+2){
     digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  delay(1000);
  Serial.println(i);
}
  for(i=31;i<=45;i=i+2){
      digitalWrite(A2,HIGH);
       digitalWrite(A3,HIGH);
       delay(1000);  
       Serial.println(i);   
}
}
  else{
   for(i=1;i<=15;i=i+2){
  digitalWrite(3,HIGH);
   delay(1000);
   Serial.println(i);
}
   for(i=16;i<=30;i=i+2){
     digitalWrite(A0,HIGH);
  delay(1000);
  Serial.println(i);
}
  for(i=31;i<=45;i=i+2){
      digitalWrite(A2,HIGH);
       delay(1000);
       Serial.println(i);     
}
  }
}
