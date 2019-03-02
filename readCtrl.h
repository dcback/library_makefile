/*****************************************************
    #ifndef abc_H
    #define abc_H
    #include "Arduino.h"
    class abc {
       public:          //functions  for main excute
           abc() { };
           ~abc() { };
           functions(); // + vars for main excute
       private:
           type _var, functions() within library
    };
    #endif
******************************************************/
#ifndef readCtrl_H
#define readCtrl_H

#include "Arduino.h"

class readCtrl {
    public:
        readCtrl()  {};
        ~readCtrl() {};
        float readPin(int _aPin);
        void writePin(int _dPin, float _refValue);

    private :
        int _aPin;
        int _dPin;
        float _refValue;
};

#endif
