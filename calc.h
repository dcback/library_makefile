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
#ifndef calc_H
#define calc_H

#include "Arduino.h"

class calc {
    public:
        calc() { };
        ~calc() { };
        int add(int _a, int _b);
        int sub(int _a, int _b);
        int mul(int _a, int _b);
        int div(int _a, int _b);

    private:
        int _a;
        int _b;
};
#endif
