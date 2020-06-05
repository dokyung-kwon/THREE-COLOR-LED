#include<SoftwareSerial.h>
#define RED 9
#define GREEN 10
#define BLUE 11

SoftwareSerial btSerial(2,3);

void setup() {
 btSerial.begin(9600);
}

void loop() {
  if(btSerial.available()){
    char c = btSerial.read();

    switch(c){
     case'r':
      analogWrite(RED,btSerial.parseInt());
      break;
     case'g':
      analogWrite(GREEN,btSerial.parseInt());
      break;
     case'b':
      analogWrite(BLUE,btSerial.parseInt());
      break;
    }
  }
}
