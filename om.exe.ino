int val;
//int tempPin = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT, A1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(A1);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(1000);

/* uncomment this to get temperature in farenhite 
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();


*/

}
