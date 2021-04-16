/*
 * File:   main.c
 * Author: Gabriel Ruanes Melquiades
 *
 * Created on 16 de Abril de 2021, 16:46
 */

#include"config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000

void LCD_init ( void )
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    ANSELH = 0;
    TRISB = 0x00;
}

void LCD_on ( void )



void main(void) 
{
    while( 1 )
    {
    
    }
}
