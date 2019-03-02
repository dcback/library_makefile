/*******************************************
    #include "abc.H"
    #include "Arduino.h"
    var abc::functtions(){ ... }
*******************************************/
#include "readCtrl.h"
#include "Arduino.h"

float readValue;

float readCtrl::readPin(int _aPin)
{
    readValue = analogRead(_aPin) * (5.0 / 1023.0);
    return  readValue;
}

void readCtrl::writePin(int _dPin, float _refValue)
{
    pinMode( _dPin, OUTPUT );
    if ( readValue > _refValue )
        digitalWrite( _dPin, HIGH );
    else
        digitalWrite( _dPin, LOW );
}
