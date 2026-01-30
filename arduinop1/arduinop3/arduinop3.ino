void setup() {
  pinMode(A0,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
 int x=analogRead(A0);
  

 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 Serial.println(x);
  if(x>0 && x<100 ){
    digitalWrite(2,HIGH);
  }
  else if(x>=100 && x<150){
    digitalWrite(3,HIGH);
  }
  else if(x>=150 && x<200){
    digitalWrite(4,HIGH);
  }
  else if(x>=250){
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
  }

delay(100);
}

