/*
 Experiment 4
 Title   : Logical Operation

 Aim     : Write an AVR C program to read a byte of data from PORTC.
           If the value is less than 100, send it to PORTB.
           Otherwise, send it to PORTD.

 Example:
   - If input from PORTC = 99 (decimal, 0x63 in hex, 01100011 in binary),
       ? Condition is TRUE (< 100)
       ? Output: PORTB = 99, PORTD = 0x00

   - If input from PORTC = 100 (decimal, 0x64 in hex, 01100100 in binary),
       ? Condition is FALSE (? 100)
       ? Output: PORTD = 100, PORTB = 0x00

 ?? Tip: Use a Programmer’s Calculator to convert between decimal, hex, and binary
         to manually verify how values are transferred between ports.
*/


#include <avr/io.h>

int main(void)
{
    DDRB = 0xFF;    // Set PORTB as output
    DDRD = 0xFF;    // Set PORTD as output
    DDRC = 0x00;    // Set PORTC as input (to read data)

    unsigned char TEMP;   // Store the input value

    while(1)
    {
        TEMP = PINC;      // Read data from PORTC

        if (TEMP < 100)   // If value is less than 100
        {
            PORTB = TEMP; // Send to PORTB
            PORTD = 0x00; // Clear PORTD
        }
        else              // If value is 100 or greater
        {
            PORTD = TEMP; // Send to PORTD
            PORTB = 0x00; // Clear PORTB
        }
    }
    return 0;
}
