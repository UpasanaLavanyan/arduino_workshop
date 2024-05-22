int Ledpin=10;
void setup()
{
 pinMode(Ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(10,HIGH);
  delay(1000);
  pinMode(10,INPUT);
  int value=digitalRead(10);
  Serial.println(value);
  digitalWrite(10,LOW);
  delay(1000);
  
  
}
