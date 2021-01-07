/*
 * File:   main.c
 * Author: walt
 *
 * Created on November 27, 2020, 7:30 PM
 */

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)


#define _XTAL_FREQ 8000000
#include <xc.h>


void main(void) {
    TRISA = 0;
    TRISB = 0;
    // Start by setting everything to off.
    RA0 = 0; // < green
    RA1 = 0; // < yellow
    RA2 = 0; // < red
    RB0 = 0; // > green
    RB1 = 0; // > yellow
    RB2 = 0; // > red
    
    
    
    RB2 = 1;    
    while(1)
    {
        RA0 = 1;
        __delay_ms(25000);
        RA0 = 0;
        RA1 = 1;
        __delay_ms(1000);
        RA1 = 0;
        RA2 = 1;
        __delay_ms(1000);
        RB0 = 1; 
        __delay_ms(25000);
        RB0 = 0;
        RB1 = 1;
        __delay_ms(1000);
        RB1 = 0;
        RB2 = 1;
        __delay_ms(1000);
   }
    return;
}
