//Exp2
//Transfer of set of bytes to a port
//Aim: Write an AVR C program to send the value 0 to FF into PORTA with delay of 100ms.
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA = 0xFF; // Set PORTA as output

    unsigned int i;

    while (1)
    {
        for (i = 0; i <= 0xFF; i++) // Loop from 0 to 255 (0x00 to 0xFF)
        {
            PORTA = i;       // Output current value to PORTA
            _delay_ms(100);  // Wait for 100 milliseconds
        }
    }

    return 0;
}