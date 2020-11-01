String state = "1";

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0){
    state = Serial.read();
  }

  Serial.println(state); 

  if(state == "0"){
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(1000);
  }
}
