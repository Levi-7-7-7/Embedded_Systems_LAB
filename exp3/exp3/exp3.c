/*
 Experiment 3
 Title   : Toggling bits on a port
 Aim     : Write an AVR C program to toggle all the bits of PORTB continuously.
 Methods :
    a) Using XOR operator.
    b) Using bitwise NOT (~) operator.
*/

#include <avr/io.h>

int main(void)
{
    DDRB = 0xFF;      // Set all pins of PORTB as output
    PORTB = 0xAA;     // Initialize PORTB with 10101010 pattern

    while(1){
        PORTB = PORTB ^ 0xFF;   // Toggle all bits of PORTB using XOR with 11111111
    }
    return 0;
}

/* ------------- (b)----------------

#include <avr/io.h>

int main(void)
{
    DDRB = 0xFF;      // Set all pins of PORTB as output
    PORTB = 0xAA;     // Initialize PORTB with 10101010 pattern

    while(1){
        PORTB = ~PORTB;   // Toggle all bits of PORTB using bitwise NOT
    }
    return 0;
}

-------------------------------------------------- */
