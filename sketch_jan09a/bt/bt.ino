char c;
boolean receive=false;
boolean state=false;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(receive)
{
  receive=false;
  if(!state)
  {
    state=true;
    digitalWrite(13,HIGH);
  }
  else
  {
    state=false;
    digitalWrite(13,LOW);
  }
  {
    
  }
}
}
void serialEvent()
{
  if(Serial.available()>0)
  {
    c=Serial.read();
    receive=true;
  }
}
