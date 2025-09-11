// WRITE AN AVR C PROGRAM TO WRITE THE VALUE 24 INTO PORT A.
#include <avr/io.h>

int main(void)
{
    DDRA = 0xFF;
	PORTA = 0x18;
// 24 in decimal is equal to 0x18 in hexadecimal.
// This is because the hexadecimal system is base 16.
// Dividing 24 by 16: 24 ÷ 16 = 1 remainder 8.
// So, 24 = (1 × 16) + 8 = 0x18 in hexadecimal.

}