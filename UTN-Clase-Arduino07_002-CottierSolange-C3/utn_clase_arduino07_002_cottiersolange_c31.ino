// use the IRRemote library
#include <IRremote.h>
// IR receiver pin
const int RECV_PIN = 12;

// Define IR Receiver and Results Objects
IRrecv irrecv(RECV_PIN);
decode_results results;

// for LED
const int GREEN = 2;
const int RED = 5;
int toggle = false;

void setup()
{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  // enable the IR receviver
  irrecv.enableIRIn();
  Serial.println("Starting");
}

void loop()
{
  // detect IRRemote keypress
  if (irrecv.decode(&results))
  {
    // print out code
    Serial.println(results.value, HEX);
    switch(results.value){
      case 0xFD08F7 :
        if (toggle)
          digitalWrite(RED, LOW);
        else
          digitalWrite(RED, HIGH);
        toggle = !toggle;
        break;
      case 0xFD8877 :
          digitalWrite(GREEN, HIGH);
          delay(500);
          digitalWrite(GREEN, LOW);
          delay(500);
          break;
      }
      irrecv.resume();
  }
}