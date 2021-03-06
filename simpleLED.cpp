/*******************************************
    #include "abc.H"        // <abc_h>      
    #include "Arduino.h"                   
    var abc::functtions(){ ... }          
*******************************************/
#include "simpleLED.h"
#include "Arduino.h" 

void simpleLED::LED(byte _pin, int _times, int _onTime)     // use same var in abc.h
{
    pinMode(_pin, OUTPUT);

    for ( int i = 0; i < _times; i++ )
    {
        digitalWrite(_pin, HIGH);
        delay(_onTime);
        digitalWrite(_pin, LOW);
        delay(_onTime);
    }
}

boolean simpleLED::Switch(int _digitalPin)
{
    pinMode(_digitalPin, INPUT_PULLUP);
    return  digitalRead(_digitalPin);   
}
