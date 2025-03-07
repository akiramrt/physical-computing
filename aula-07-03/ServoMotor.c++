#include<Servo.h>

#define servoPin 6

Servo servo;

void setup() {

  Serial.begin(9600);
  servo.attach(servoPin);

}

void loop() {
  if (Serial.available() > 0) {

    char comando = Serial.read();

    if (comando == '1'){
        servo.write(90);
    } else if (comando == '2'){
        servo.write(180);
    }
  }
}
