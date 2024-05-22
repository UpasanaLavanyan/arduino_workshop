const int trigpin = 9;
const int echopin = 10;
long duration;
int distance_cm;
void setup(){
 pinMode(trigpin, OUTPUT);
 pinMode(echopin, INPUT);
 Serial.begin(9600);
}
void loop(){
 digitalWrite(trigpin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin, LOW);
 
 duration = pulseIn(echopin, HIGH);
//conversion 
 distance_cm = duration * 0.034 / 2;
 
 Serial.println("Distance: ");
 Serial.println(distance_cm);
 Serial.println(" cm");
 
 delay(500); // Adjust this delay to control the frequency of distance readings
}
