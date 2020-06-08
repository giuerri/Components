#include <Led.h>

Led red;

void setup() {
  red.setPin(8);
}

void loop() {
red.turnOn();
delay(2000);
red.turnOff();
delay(2000);
}
