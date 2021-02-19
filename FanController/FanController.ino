int fan = 12;

void setup() {
  pinMode(fan, OUTPUT);

  //turn OFF
  digitalWrite(fan, LOW);
} 
    
void loop() {
 digitalWrite(fan, HIGH);
 delay(10000);

 digitalWrite(fan, LOW);
 delay(2000);
}
