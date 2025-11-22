/*
 * File:   tarea1.c
 * Author: Usuario
 *
 * Created on 21 de noviembre de 2025, 08:27 PM
 */


#include <xc.h>
#define __XTAL_FREQ 8000000

void main(void) {
    TRISA = 0b00000001;
    TRISB = 0b00000000;
    PORTBbits.RB0 = 0;

    while(1){
        if(PORTAbits.RA0 == 1){
            PORTBbits.RB0 = 1;
        }//if
        else{
            PORTBbits.RB0 = 0;
        }//else
    }//while    
    return;
}
