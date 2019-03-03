/*******************************************
    #include "abc.H"
    abc Oper;  -> Oper.functions() at loop
    Oper.functions(); in loop
*******************************************/
#include "readCtrl.h"

readCtrl Read_Control;

extern float readValue;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Read_Control.readPin(A0);
    Read_Control.writePin(13, 2.5);
    Serial.print("read Value : ");
    Serial.println(readValue);
}
