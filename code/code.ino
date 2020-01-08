float degreesToRadians(float degrees) {
  return degrees * PI / 180;
}

float distanceCoordinates(float lat1, float lon1, float lat2, float lon2) {
  float earthRadius = 6371000;

  float dLat = degreesToRadians(lat2-lat1);
  float dLon = degreesToRadians(lon2-lon1);

  lat1 = degreesToRadians(lat1);
  lat2 = degreesToRadians(lat2);

  float a = sin(dLat/2) * sin(dLat/2) +
          sin(dLon/2) * sin(dLon/2) * cos(lat1) * cos(lat2); 
  float c = 2 * atan2(sqrt(a), sqrt(1-a)); 
  return earthRadius * c;
}
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
 float distance = distanceCoordinates(-1.967212, 30.059291,-1.968012, 30.059691);
 Serial.println(distance);

}
