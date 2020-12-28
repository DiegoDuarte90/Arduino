int pinDato = 8;
int pinClock = 10;
int pinRegistro = 9;
 
void setup() {
  pinMode(pinRegistro, OUTPUT);
  pinMode(pinClock, OUTPUT);
  pinMode(pinDato, OUTPUT);
  
}
 
void loop() {

  SalidaDatos(B10101010);  
  delay(100);
  SalidaDatos(B01010101);  
  delay(100);
  SalidaDatos(B00000000);  
  delay(100);
  SalidaDatos(B00000001);  
  delay(100);
  SalidaDatos(B00000011);
  delay(100);
  SalidaDatos(B00000111);
  delay(100);
  SalidaDatos(B00001111);
  delay(100);
  SalidaDatos(B00011111);
  delay(100);  
  SalidaDatos(B00111111);
  delay(100);
  SalidaDatos(B01111111);
  delay(100);  
  SalidaDatos(B11111111);
  delay(100);
  SalidaDatos(B01111111);
  delay(100);
  SalidaDatos(B00111111);
  delay(100);
  SalidaDatos(B00011111);
  delay(100);  
  SalidaDatos(B00001111);
  delay(100);
  SalidaDatos(B00000111);
  delay(100);  
  SalidaDatos(B00000011);
  delay(100);
  SalidaDatos(B00000001);
  delay(100);  
  SalidaDatos(B00000000);
  delay(100);  
  SalidaDatos(B00000001);
  delay(100);
  SalidaDatos(B00000010);
  delay(100);
  SalidaDatos(B00000101);
  delay(100);
  SalidaDatos(B00001010);
  delay(100);
  SalidaDatos(B00010101);
  delay(100);
  SalidaDatos(B00101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010101);
  delay(100);
  SalidaDatos(B10101010);
  delay(100);
  SalidaDatos(B01010100);
  delay(100);
  SalidaDatos(B10101000);
  delay(100); 
  SalidaDatos(B01010000);
  delay(100); 
  SalidaDatos(B10100000);
  delay(100); 
  SalidaDatos(B01000000);
  delay(100); 
  SalidaDatos(B10000000);
  delay(100); 
  SalidaDatos(B00000000);
  delay(100); 

  
}
 

void SalidaDatos(int dato) {

  shiftOut(pinDato, pinClock, MSBFIRST, dato);
  digitalWrite(pinRegistro,LOW);
  digitalWrite(pinRegistro,HIGH);
  
}
