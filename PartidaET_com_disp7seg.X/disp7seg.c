/*
 * File:   disp7seg.c
 * Author: Gabriel Ruanes Melquiades 
 *
 * Created on 4 de Março de 2021, 14:01
 */


#include <xc.h>

char vetor[10] = {  0x3F, 0x06, 
                    0x5B, 0x4F,
                    0x66, 0x6D, 
                    0x7D, 0x07,
                    0x7F, 0x6F };

void disp7seg_init ( void )
{
    ANSELH = 0;
    TRISB = 0;
    PORTB = 0;
}

void display7seg ( int c )
{
    PORTB = vetor[c];
}