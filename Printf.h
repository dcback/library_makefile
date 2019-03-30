#ifndef PRINTF_H
#define PRINTF_H

#include <Arduino.h>

#if !defined (ARDUINO)
#error This example is only for Arduino.
#endif // ARDUINO

void printfBegin();
int serial_putc(char c, FILE *);
void printHex8(uint8_t val);
void printHex16(uint16_t val);
void printHex32(uint32_t val);
void printDec32(uint32_t val);

#endif 
