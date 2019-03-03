/*******************************************
    #include "abc.H"
    #include "Arduino.h"
    var abc::functtions(){ ... }
*******************************************/
#include "calc.h"
#include "Arduino.h"

int calc::add(int _a, int _b)
{
    return _a + _b;
}

int calc::sub(int _a, int _b)
{
    return _a - _b;
}

int calc::mul(int _a, int _b)
{
    return _a * _b;
}

int calc::div(int _a, int _b)
{
    return _a / _b;
}
