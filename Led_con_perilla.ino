const int led=3;
const int pot=0;
int brillo;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  brillo=analogRead(pot)/4;
  analogWrite(led,brillo);
  Serial.print("Led: ");
  Serial.println(brillo);

}
