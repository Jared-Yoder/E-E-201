//https://wokwi.com/projects/346522196121748052
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT); //pin 4 is digital output
  pinMode(A1, INPUT); //pin A1 is analog input
}

int d = 0;
void loop() {
  // put your main code here, to run repeatedly:
  d = analogRead(A1) + 100; //read in the delay
  digitalWrite(4, HIGH);
  delay(d); //delay by d
  d = analogRead(A1) + 100; //read in the delay
  digitalWrite(4, LOW);
  delay(d); //delay by d
}
