

  int a=2;
  int b=3;
  int c=4;
  int d=5;
  int e=6;
  int f=7;
  int g=8;

  int seg;
  int mili;
  
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  seg=millis()/1000;
  mili=(millis()%1000)/10;
  digito(4);
  mostrarNumero(mili%10);
  limpiar();
  digito(3);
  mostrarNumero(mili/10);
  limpiar();
  digito(2);
  mostrarNumero(seg%10);
  limpiar();
  digito(1);
  mostrarNumero(seg/10);
  limpiar();


  
}


void mostrarNumero(int n){
  switch(n){
    case 0:
      cero();
      break;
    case 1:
      uno();
      break;
    case 2:
      dos();
      break;
    case 3:
      tres();
      break;
    case 4:
      cuatro();
      break;
    case 5:
      cinco();
      break;
    case 6:
      seis();
      break;
    case 7:
      siete();
      break;
    case 8:
      ocho();
      break;
    case 9:
      nueve();
      break;
  }
}

void digito(int n){
  switch(n){
    case 1:
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      break;
  
    case 2:
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      break;
      
    case 3:  
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      break;
      
    case 4:
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      break;
  } 

}



void limpiar(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void cero(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}
void uno(){
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void dos(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}
void tres(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}
void cuatro(){
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void cinco(){
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}
void seis(){
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
}
void siete(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void ocho(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void nueve(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(c, HIGH);
}
