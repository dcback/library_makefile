/*******************************************
    #include "abc.H"
    abc Oper;  -> Oper.functions() at loop
    Oper.functions(); in loop
*******************************************/
#include "calc.h"

#define ledPin 13

calc Oper;

char buf0[16];
char buf1[16];
char buf2[16];
char buf3[16];

void setup() {
    Serial.begin(9600);
    randomSeed(analogRead(0));
    pinMode(ledPin, OUTPUT);
}

void loop() {

    int a = random(10);
    int b = random(10);
    int ans0 = Oper.add(a, b);
    int ans1 = Oper.sub(a, b);
    int ans2 = Oper.mul(a, b);
    int ans3 = Oper.div(a, b);

    sprintf_P(buf0, PSTR("%d + %d = %d"), a, b, ans0);
    sprintf_P(buf1, PSTR("%d - %d = %d"), a, b, ans1);
    sprintf_P(buf2, PSTR("%d * %d = %d"), a, b, ans2);
    sprintf_P(buf3, PSTR("%d / %d = %d"), a, b, ans3);

    Serial.println(buf0);
    Serial.println(buf1);
    Serial.println(buf2);
    Serial.println(buf3);

    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
}
