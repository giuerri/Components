/*
Copyright (c) 2020 Maurizio Brioschi <maurizio.brioschi@gmail.com>
*/
#ifndef Led_h
#define Led_h
#include "Arduino.h"

class Led {
private:
    short pin;
public:
    Led();
    Led(short p);
    Led& setPin(short p);
    short getPin();
    void turnOn();
    void turnOff();
};
#endif