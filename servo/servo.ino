#define BAUD 9600
#include <Servo.h>

Servo servo;

void setup(){

  Serial.begin(BAUD);
  while(!Serial);

  servo.attach(10);
  
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){
  
  digitalWrite(LED_BUILTIN, HIGH);

  Serial.println("Andiamo avanti (led acceso)");
  
  for (int pos = 0; pos <= 180; pos += 1){    
    servo.write(pos);             
    Serial.println("Pos " + String(pos) + " Gradi"); 
    delay(50);                       
  }

  Serial.println("Andiamo indietro (led spento)");

  digitalWrite(LED_BUILTIN, LOW);
  
  for (int pos = 180; pos >= 0; pos -= 1){
    servo.write(pos);             
    Serial.println("Pos " + String(pos) + " Gradi"); 
    delay(50);                      
  }
}
