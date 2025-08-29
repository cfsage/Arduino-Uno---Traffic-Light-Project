void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //red
  pinMode (10, OUTPUT); //yellow
  pinMode(12, OUTPUT); //green
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); //turn on the red - 3 sec
  delay(6000);
  digitalWrite(10, HIGH); // turn on the yellow for 1 sec
  delay(3000);

  digitalWrite(8, LOW); // turn off the red
  digitalWrite(10, LOW); // turn off the yellow

  digitalWrite(12, HIGH); // turn on the green for 3 sec
  delay(6000);
  digitalWrite(12, LOW); // turn off the green light
  delay(500);

  // blink

  digitalWrite(12, HIGH); // turn on green for .5 sec --1
  delay(500);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);







}
