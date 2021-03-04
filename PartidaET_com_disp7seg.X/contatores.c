/*
 * File:   contatores.c
 * Author: Gabriel Ruanes Melquiades
 *
 * Created on 4 de Março de 2021, 13:30
 */


#include <xc.h>

#define     K1     PORTDbits.RD7
#define     K2     PORTDbits.RD6
#define     K3     PORTDbits.RD5 

#define     S1     PORTDbits.RD1
#define     S0     PORTDbits.RD0

void contatores_init ( void )
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    PORTD = 0;
}

char botao_S1 ( void )
{
    return (S1);
}

char botao_S0 ( void )
{
    return (S0);
}

void k1 ( int x )
{
    K1 = x;
}

void k2 ( int x )
{
    K2 = x; 
}

void k3 ( int x )
{
    K3 = x;
}