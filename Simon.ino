#define dificultad 10




int secuencia[dificultad];
int pulsos=dificultad;
int lucesAux[dificultad]={0};
int botonesAux[dificultad]={0};
int botones[3]={0};


bool respuesta=false;
int cont=1;

int estado1=0;
int estadoAnterior1=0;
int salida1=0;

int estado2=0;
int estadoAnterior2=0;
int salida2=0;

int estado3=0;
int estadoAnterior3=0;
int salida3=0;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);

  randomSeed(analogRead(A0));

  Serial.begin(9600);
}






void loop() {
  
  nuevaSecuencia();
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(1000);
  
  for(int i=0;i<pulsos;i++){
    Serial.println("INGRESO1");
    for(int j=0;j<cont;j++){
      
      digitalWrite(secuencia[j],HIGH);
      delay(400);
      digitalWrite(secuencia[j],LOW);
      delay(400);

      lucesAux[j]=secuencia[j];
      Serial.println("INGRESO2");
    }
    for(int k=0;k<cont;k++){
      resetEstados(botones,pulsos);
      
      while(botones[0]==0&&botones[1]==0&&botones[2]==0){  
        estadoBotones(k);
      }
      delay(50);
      if(k==cont-1){
        delay(1500);
      }
     Serial.println("INGRESO3");
    respuesta=acierto(k);
    if(respuesta==false){
      titilarLuces();
    }
    resetEstados(botones,pulsos);
    
    Serial.println("Se resetean botones");
    }

    //resetEstados(luces,pulsos);
      
    
    cont++;
    
    
  }

  ganaste();
  mostrarVector();

}









void nuevaSecuencia(){
    for(int i=0;i<=pulsos-1;i++){
    secuencia[i]=random(2,5);
    Serial.print(secuencia[i]);
  }
  Serial.println(" ");
}
void mostrarVector(){
  Serial.print("Vector: ");
  for(int i=0;i<=pulsos-1;i++){
    Serial.print(secuencia[i]);      
  }
  Serial.println();
  delay(10000);
}


void resetEstados(int vec[],int pulsos){
  vec[0]=0;
  vec[1]=0;
  vec[2]=0;
}

bool acierto(int k){
  Serial.print(botonesAux[0]);
  Serial.print(botonesAux[1]);
  Serial.println(botonesAux[2]);
  Serial.print(lucesAux[0]);
  Serial.print(lucesAux[1]);
  Serial.println(lucesAux[2]);
  if (botonesAux[k]==lucesAux[k]){
    
    return true;
  }
  else{
    return false;
  }
}

void titilarLuces(){
  int a=0;
  while(a==0){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(400);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(400);
  }

}

void estadoBotones(int k){
  botones[0]=digitalRead(8);
  botones[1]=digitalRead(9);
  botones[2]=digitalRead(10);
  if(botones[0]==1){
    digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(2,LOW);
    botonesAux[k]=2;
    delay(50);
  }
  else{
    if(botones[1]==1){
      digitalWrite(3,HIGH);
      delay(200);
      digitalWrite(3,LOW);
      delay(50);
      botonesAux[k]=3;
    }
    else{
      if(botones[2]==1){
         digitalWrite(4,HIGH);
         delay(200);
         digitalWrite(4,LOW);
         botonesAux[k]=4;
         delay(50);
      }
      
    }
  }
  
}

void ganaste(){
  int a=0;
  while(a==0){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(3,HIGH);
    delay(100);
    digitalWrite(3,LOW);
    delay(100);
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    delay(100);
  }
}
