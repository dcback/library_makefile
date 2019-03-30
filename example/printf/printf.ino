/**********************************************************
    printf("str")           // RAM 
    printf_P(PSTR("str"))   // Flash
    printf("%d %c %s\n", dec, char, str)        // RAM    
    printf_P(PSTR("%d %c %s\n"),dec, char, str) // Flash 
/*********************************************************/
#include <Printf.h>

void setup()
{
    Serial.begin(9600);

    printfBegin();    // Redirect printf() calls to the first serial port

    // Use printf() with string in RAM
    printf("Hello world with printf() string in RAM\n");

    // Use printf() with string in Flash
    printf_P(PSTR("Hello world with printf() string in Flash\n"));

    // Use printf() to print the variable
    int inum = 314; float fnum = 3.14; char ch = 'a'; char str[] = "abc";

    printf_P(PSTR(">>> Value : [%d][%c][%s]\n"), inum, ch, str);  // Flash use
    printf(">>> Value : [%d][%c][%s]\n", inum, ch, str);          // RAM use
    Serial.println(fnum);

    // Print 8-bit hex value
    printHex8(0xa5);

    // Print 16-bit hex value
    printHex16(0xFFFF);

    // Print 32-bit hex value
    printHex32(0xabcdef);

    // Print 32-bit decimal value
    printDec32(12345678);
}

void loop()
{
}
