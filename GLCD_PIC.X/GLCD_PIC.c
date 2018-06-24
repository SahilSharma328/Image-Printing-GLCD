/*
 * File:   picture4.c
 * Author: MY COMPUTER
 *
 * Created on January 8, 2018, 10:33 AM
 */




// PIC18F45K22 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1H
#pragma config FOSC = ECMP      // Oscillator Selection bits (EC oscillator, CLKOUT function on OSC2 (medium power, 500 kHz-16 MHz))
#pragma config PLLCFG = OFF     // 4X PLL Enable (Oscillator used directly)
#pragma config PRICLKEN = OFF   // Primary clock enable bit (Primary clock can be disabled by software)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRTEN = OFF     // Power-up Timer Enable bit (Power up timer disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bits (Brown-out Reset disabled in hardware and software)
#pragma config BORV = 190       // Brown Out Reset Voltage bits (VBOR set to 1.90 V nominal)

// CONFIG2H
#pragma config WDTEN = OFF      // Watchdog Timer Enable bits (Watch dog timer is always disabled. SWDTEN has no effect.)
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = PORTC1  // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = OFF     // PORTB A/D Enable bit (PORTB<5:0> pins are configured as digital I/O on Reset)
#pragma config CCP3MX = PORTB5  // P3A/CCP3 Mux bit (P3A/CCP3 input/output is multiplexed with RB5)
#pragma config HFOFST = OFF     // HFINTOSC Fast Start-up (HFINTOSC output and ready status are delayed by the oscillator stable status)
#pragma config T3CMX = PORTC0   // Timer3 Clock input mux bit (T3CKI is on RC0)
#pragma config P2BMX = PORTD2   // ECCP2 B output mux bit (P2B is on RD2)
#pragma config MCLRE = EXTMCLR  // MCLR Pin Enable bit (MCLR pin enabled, RE3 input pin disabled)

// CONFIG4L
#pragma config STVREN = OFF     // Stack Full/Underflow Reset Enable bit (Stack full/underflow will not cause Reset)
#pragma config LVP = OFF        // Single-Supply ICSP Enable bit (Single-Supply ICSP disabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection Block 0 (Block 0 (000800-001FFFh) not code-protected)
#pragma config CP1 = OFF        // Code Protection Block 1 (Block 1 (002000-003FFFh) not code-protected)
#pragma config CP2 = OFF        // Code Protection Block 2 (Block 2 (004000-005FFFh) not code-protected)
#pragma config CP3 = OFF        // Code Protection Block 3 (Block 3 (006000-007FFFh) not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection Block 0 (Block 0 (000800-001FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection Block 1 (Block 1 (002000-003FFFh) not write-protected)
#pragma config WRT2 = OFF       // Write Protection Block 2 (Block 2 (004000-005FFFh) not write-protected)
#pragma config WRT3 = OFF       // Write Protection Block 3 (Block 3 (006000-007FFFh) not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection Block 0 (Block 0 (000800-001FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection Block 1 (Block 1 (002000-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection Block 2 (Block 2 (004000-005FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection Block 3 (Block 3 (006000-007FFFh) not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0007FFh) not protected from table reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

const char al[1024]={
   0,  0,  0,192,  0,  0,  0,  0,192,  0,  0,128, 64, 64, 64, 64, 
   0,  0,128, 64, 64,128,128,  0,  0,  0,  0, 64,248, 68, 68,  4, 
  64, 64, 64,128,  0,  0,  0,192, 64, 64, 64, 64,128, 64, 64, 64, 
  64,128,  0,196,  0,  0,252,  0,  0,196,  0,  0,  0,  0, 64, 64, 
  64,128,  0,  0,128,128, 64,  0,  0,  0,  0,  0,128, 64, 64, 64, 
  64,192,  0,  0,  0,128, 64,  0,192, 64, 64, 64, 64,128, 64, 64, 
  64, 64,128,  0,252, 64, 64, 64,128,  0,  0,  0,128, 64, 64, 64, 
 128,  0,  0,  0,252,  0,  0,128, 64, 64, 64, 64,  0,  0,  0,  0, 
   0,  0,  0, 15, 16, 16, 16, 16, 31,  0,  0,  9, 18, 18, 12,  0, 
   0, 15, 18, 18, 18, 18, 11,  2,  0,  0,  0,  0, 31,  0,  0, 12, 
  18, 17, 17, 31,  0,  0,  0, 31,  0,  0,  0,  0, 31,  0,  0,  0, 
   0, 31,  0, 31,  0,  0, 31,  0,  0, 31,  0,  0,  0, 12, 18, 17, 
  17, 31,  0,  0, 31,  0,  0,  0,  0,  0,  0,  0,  9, 18, 18, 12, 
   0,129,198, 56,  6,  1,  0,  0, 31,  0,  0,  0,  0, 31,  0,  0, 
   0,  0, 31,  0, 31, 16, 16, 16,  8,  7,  0,  0, 15, 16, 16, 16, 
   8,  7,  0,  0, 31,  0,  0,  9, 18, 18, 12,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,224, 
 240,240, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,248,248,240, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,224,160, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 
  32, 32, 32, 32, 32,160,224,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,192,224,112, 48, 56,248,252,252,254,254,252, 
 249,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,248,252, 
 252,252,248, 56,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,255,  0,  1,  2,  4,136,208, 96, 64, 64, 64, 64, 64, 64, 96, 
 208,136,  4,  2,  1,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0, 31, 31,  0,  0,252,255,255,255,255,199,  1, 
   3,  7,  6, 14, 12, 28, 24, 24,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,128,192,192,224,240,240,248,248,252,255,255,255,255, 
 254,252,248,248,240,240,224,192,192,128,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0,255,255, 
 255,192,192,192,192,192,192,192,192,  0,  0,  0,  0,  0,  0,  0, 
   0, 31, 24, 28, 22, 19, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
  16, 17, 19, 22, 28, 24, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,192,248,255,127, 31,  7,  3,  7, 31,255, 
 254,248,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,112,120,124, 62, 
  62, 63, 31, 31, 31, 15, 15, 15,  7,  7,  7,  3,255,255,255,255, 
   3,  3,  7,  7,  7, 15, 15, 15, 31, 31, 31, 63, 62, 62,124,120, 
 112,  0,  0,  0,  0,  0,128,240,252, 28,  6,  7,  3,  0, 31, 31, 
  31, 25, 25, 25, 25, 25, 25, 25, 25, 24, 24,248,248,240,128,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0, 16, 30, 31,  7,  1,  0,  0,  0,  0,  0,  0,  0, 
   7, 31, 31, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,255,255,127,255, 
 240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  3, 31, 62,248,240,192,128,128,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,128,192,224,240,112,  7, 63,255,252, 
 224, 96, 96,112, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  3,  3,  1,  1,  0,  0,  0,  0, 
   0,  1,  1,  3,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  3,  3,  3, 
   6,  6,  6,  6,  7,  7,  3,  3,  3,  1,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 
};

#define _XTAL_FREQ 16000000
#define LCD PORTD
#define RS PORTCbits.RC2
//#define RW PORTCbits.RC3
#define EN PORTCbits.RC4
#define CS1 PORTCbits.RC5
#define CS2 PORTCbits.RC6
//#define RST PORTCbits.RC7
void dat(unsigned char j) {
    LCD=j;
    RS=1;
    EN=1;
    __delay_us(50);
    EN=0;
    __delay_us(50);
}

void cmd(unsigned int k){
     LCD=k;
    RS=0;
    EN=1;
    __delay_us(50);
    EN=0;
    __delay_us(50);
}

void chipselect(int chip)
{
    if (chip==1)
    {
        CS1=0;
        CS2=1;
    }
    else if(chip==0)
    {
        CS1=1;
        CS2=0;
    }
}
void main(void) {
    ANSELC=0;
    ANSELD=0;
    ANSELA=0;
    TRISA=0X00;
    TRISC=0X00;
    TRISD=0X00;
    int c=0xb8;
    cmd(0x3f);
    cmd(c);
    cmd(0x40);
    int a,b,c,d;
    d=0;
    //RST=1;
    //RW=0;
    for(a=1;a<=8;a++)
    {
        chipselect(1);
        cmd(c);
        cmd(0x40);
        for(b=d;b<128*a;b++)
        {
            if(b==64)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==192)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==320)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==448)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==576)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==704)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==832)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            else if(b==960)
            {
                chipselect(0);
                cmd(c);
                cmd(0x40);
            }
            d=b;
            dat(al[b]);
        }
        c=c+0x01;        
    }
    return;
}
