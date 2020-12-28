
#include <Servo.h>

Servo servoMotor;
int estado=0;
int estadoAnterior=0;
int salida=0;

void setup() {
  
  Serial.begin(9600);

  servoMotor.attach(4);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(estado);
  estado = digitalRead(8);
  if(estado==HIGH&&estadoAnterior==LOW){
    salida=1-salida;
    delay(20);
  }
  estadoAnterior=estado;
  if(salida == 1){
    servoMotor.write(0);
    delay(1000);
  

    

    salida=0;
  }
  else{
  }

}
