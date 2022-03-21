/*
   Abhi Patel
*/

#define Gate 10
#define LM35 A0

float lm_value;
float tempc;


void setup() {
  Serial.begin(9600);
  pinMode(Gate, OUTPUT);
  digitalWrite(Gate, LOW);
}

void loop() {

  lm_value = analogRead(LM35);
  tempc = (lm_value * 500) / 1023;
  Serial.println(tempc);
  //Temperature converted into Celcius

  if(tempc > 25)
  {
    digitalWrite(Gate, HIGH);
  }
  else
  {
    digitalWrite(Gate, LOW);
  }
 delay(4000);
}