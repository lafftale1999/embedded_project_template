#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <avr/interrupt.h>

// Library for time related operations - for example delays
#include "include/millis.h"

// DECLARATIONS
// ------------

int main(void) {

    // SETUP
    // -----
    millis_init();
    sei(); // <- Enable global interrupts

    // SUPER-LOOP
    while(1) {
        /* 
        { OUR PROGRAM }
        */

        millis_wait_ms(500);
    }
}