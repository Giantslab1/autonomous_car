#include <SoftwareSerial.h>
SoftwareSerial bluet(2,3);
void setup() {
  Serial.begin(4800);
  bluet.begin(9600);
}

void loop() {
  while(bluet.available()){
    Serial.write(bluet.read());
  }

}
