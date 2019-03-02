/*******************************************
    #include "abc.h"        // <abc_h>                  
    #include <Arduino.h>                   
    
    (var) abc::funct { }    // functions{..}        
*********************************************/
#include <simpleLED.h>
#include <Arduino.h> 

void simpleLED::LED(byte _pin, int _times, int _onTime)     // use same var in abc.h
{
    pinMode(_pin, OUTPUT);

    for ( int i = 0; i < _times; i++ )
    {
        digitalWrite(pin, HIGH);
        delay(_onTime);
        digitalWrite(pin, LOW);
        delay(_onTime);
    }
}

boolean simpleLED::Switch(int _digitalPin)
{
    pinMode(_digitalPin, INPUT_PULLUP);
    return  digitalRead(_digitalPin);   
}
