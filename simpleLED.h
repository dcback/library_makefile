/*****************************************************
    #ifndef abc_h
    #define abc_h
    #include <Arduino.h> 
    class abc { 
       public:          //functions  for main excute
           abc() { }; 
           ~abc() { };  
           functions(); // + vars for main excute
       private: 
           type _var, functions() within library
    };   
******************************************************/
#ifndef simpleLED_h
#define simpleLED_h

#include <Arduino.h>            // necessary for arduino codes

class simpleLED
{   public:                     // functions
        simpleLED(void) {};     // Constructor for function parameter 
        ~simpleLED(void) {};    // Constructor for function parameter 
        
        void    LED( byte pin, int times, int onTime);  // same Function var & Not _var
        boolean Switch(int digitalPin);

    private:            // variables & function within library
        byte _pin;      // must types _aaa
        int  _times;    // must types _bbb
        int  _onTime;   // must types _ccc
};

#endif
