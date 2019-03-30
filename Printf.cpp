#include "Printf.h"

#if defined(__arm__)

void printfBegin()
{
}

#else // __arm__

int serial_putc(char c, FILE *)
{
  Serial.write(c);

  return c;
}

void printfBegin()
{
  fdevopen(&serial_putc, 0);
}

#endif // __arm__

void printHex8(uint8_t val)
{
  Serial.print("0x");
  if (val < 0x10) {
    Serial.print("0");
  }
  Serial.println(val, HEX);
}

void printHex16(uint16_t val)
{
  Serial.print("0x");
  if (val < 0x1000) {
    Serial.print("0");
  }
  if (val < 0x100) {
    Serial.print("0");
  }
  if (val < 0x10) {
    Serial.print("0");
  }
  Serial.println(val, HEX);
}

void printHex32(uint32_t val)
{
  Serial.print("0x");
  for (int8_t i = 3; i >= 0; i--) {
    uint8_t c = val >> (i * 8);
    if (c < 0x10) {
      Serial.print("0");
    }
    Serial.print(c, HEX);
  }
  Serial.println();
}

void printDec32(uint32_t val)
{
  char buf[9];
  
  snprintf_P(buf, sizeof(buf), PSTR("%lu"), val);
  Serial.println(buf);
}
