#include "Arduino.h"
#include "Led.h"

Led::Led(){}

Led::Led(short p) {
    pin = p;
    pinMode(pin, OUTPUT);					
	digitalWrite(pin, LOW);
};

Led& Led::setPin(short p) {
    pin = p;
    pinMode(pin, OUTPUT);					
	digitalWrite(pin, LOW);
    return *this;
} 

short Led::getPin() {
    return pin;
}

void Led::turnOn(){
    digitalWrite(pin, HIGH);
}

void Led::turnOff(){
    digitalWrite(pin, LOW);
}