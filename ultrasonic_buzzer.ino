const int trigpin = 9;
const int echopin = 10;
const int buzzerpin=13;
long duration;
int distance_cm;
void setup(){
 pinMode(trigpin, OUTPUT);
 pinMode(echopin, INPUT);
  pinMode(buzzerpin,OUTPUT);
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
  if(distance_cm<=15){
    digitalWrite(buzzerpin,HIGH);
    delay(1000);
  }
  if(distance_cm>15){
  digitalWrite(buzzerpin,LOW);
    delay(1000);
  }
  
 delay(500); // Adjust this delay to control the frequency of distance readings
}
