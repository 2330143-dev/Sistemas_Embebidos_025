/*
 * File:   counter.c
 * Author: Usuario
 *
 * Created on 30 de octubre de 2025, 07:26 AM
 */

#define _XTAL_FREQ 2000000
#include <xc.h>
unsigned char counter = 0;
void main(void) {
   TRISA = 0x01;// 0b00000001 es lo mismo 
   TRISB = 0x00;
   PORTB =  0x3f;//0b00111111;
   
   while(1){
      
       unsigned char botton = PORTBITS.RA0;
       if(botton == 1){
           counter++;
       }//if
       if(counter == 10){
       counter = 0;
       }//if2°
       switch (counter){
               case 0:
                   PORTB = 0x3f;
                   break;
                   case 1:
                       PORTB = 0x306;
                       break;
        case 2:
                   PORTB = 0x5b;
                   break;
                   case 3:
                       PORTB = 0x4f;
                       break;
           case 4:
                   PORTB = 0x66;
                   break;
                   case 5:
                       PORTB = 0x6d;
                       break;
        case 6:
                   PORTB = 0x5b;
                   break;
                   case 7:
                       PORTB = 0x07;
                       break;
          case 8:
                   PORTB = 0x7f;
                   break;
                   case 9:
                       PORTB = 0x6f;
                       break;
     
                       
       }//switch
   }//while
  
    
    return;
}
