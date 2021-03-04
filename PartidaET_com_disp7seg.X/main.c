/*
 * File:   main.c
 * Author: Gabriel Ruanes Melquiades 
 *
 * Created on 4 de Março de 2021, 13:20
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "contatores.h"
#include "disp7seg.h"

void main(void) 
{
    contatores_init();
    disp7seg_init();
    int estado = 0;
    char cont = 0;
    int t;    
    
    while ( 1 )
    {
        switch ( estado )
        {
            case 0:
                    if ( botao_S1() == 1 )
                        estado = 1; 
                    break;
                    
            case 1:
                    k1 (1);
                    k2 (1);
                    k3 (0);
                    t = 3000;
                    estado = 2;
                    break;
                
            case 2:
                    if (botao_S0() == 1)
                    {
                        k1 (0);
                        k2 (0);
                        k3 (0);
                        estado = 0;
                    }
                    delay(1);                    
                    if ( --t <= 0 )
                        estado = 3;
                    break;
                    
            case 3:
                    display7seg(cont);
                    if ( ++cont >= 10 )
                        cont = 0;
                        estado = 4;
                    break;
                
            case 4:                  
                    k1 (1);
                    k2 (0);
                    k3 (1);
                    if ( botao_S0() == 1 )
                        estado = 5;
                    break;
                
            case 5:
                    k1 (0);
                    k2 (0);
                    k3 (0);
                    estado = 0;
                    break;
        }
    }
}
