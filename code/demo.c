#include <xc.h>
#include <stdint.h>
#include "fuses.h"

#define _XTAL_FREQ 20000000

#define TRISIO_VAL 0b11111011
#define PIN_LED   GP2

void boardInit(void){
    TRISIO = TRISIO_VAL;
}

void main(void) {
    boardInit();
    
    while(1){
        PIN_LED = 1;
        __delay_ms(100);
        PIN_LED = 0;
        __delay_ms(100);
    }
}
