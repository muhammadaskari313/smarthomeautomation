 char val;

 
void setup() {

pinMode(13,OUTPUT);
Serial.begin(9600);
 digitalWrite(13,HIGH);
  
}

void loop() {

  if(Serial.available()){
 val = Serial.read();
 Serial.println(val);
}
if(val=='1'){
  digitalWrite(13,LOW);
 
}
else if(val=='2'){
  digitalWrite(13,HIGH);

}


delay(100);

}
