String input="";
boolean finish=false;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(finish){
  finish=false;
  int n=input.toInt();
  n*=n;
  Serial.println(n);
}

}
void serialEvent()
{
  while(Serial.available()){
    char inCar=(char)Serial.read();
    input+=input;
    if(inCar=='\n')
    finish=true;
  }
}
