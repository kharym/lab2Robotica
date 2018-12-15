//variables del motor1
int ENA =10; //Pin habilita motor A y con pin 10 se puede controlar velocidad 
int in1 =9; //Pin controla sentido de giro  
int in2 =8;

//variables del motor2
int ENB =5;
int in3 =7; 
int in4 =6;

void setup (){

// se configura todo los pines como salida
 pinMode(ENA,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(ENB,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);
 
}

void prueba1(){
  
  //Gira el motor1 en sentido horario (para el lado del UNO de la placa)
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW); 

  //Setea la velocidad a 200 en el rango posible de 0-255
  analogWrite(ENA,250);

  //Gira motor2 en sentido horario
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH); 

  //Setea la velocidad a 200 en el rango posible de 0-255
  analogWrite(ENB,250);

  delay(3000); // Se gira los motores por 3 segundos.

  //Se cambia el sentido de giro de los motores
 /* digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  
  delay(3000); // Se gira los motores por 3 segundos.*/
 }

 void prueba2(){

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  
  //acelara desde 0 a la velocidad maxima 

  for (int i= 0; i<256; i++){

    analogWrite(ENA,i);
    analogWrite(ENB,i);
    delay(20);
  }

  //desacelerar desde max a 0
  for (int i= 255; i>= 0; --i){

    analogWrite(ENA,i);
    analogWrite(ENB,i);
    delay(20);
  }

  //Se apaga el motor
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW); 
}

void loop(){
 prueba1();

}
