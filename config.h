/* 
 * File:   config.h
 * Author: ReadOnly
 *
 * Created on August 1, 2016, 3:29 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#include <htc.h>
#include <pic18.h>


#pragma config CONFIG1H = 0xC6
//__CONFIG(1, OSC_HSPLL & FCMEN_ON & IESO_ON);
#pragma config CONFIG2L = 0x1A
//__CONFIG(2, PWRT_ON & BOREN_ON & BORV_3);
#pragma config CONFIG2H = 0xE
//__CONFIG(3, WDT_OFF & WDTPS_128);
#pragma config CONFIG3H = 0x1
//__CONFIG(4, CCP2MX_PORTC & PBADEN_OFF & LPT1OSC_OFF & MCLRE_OFF);
#pragma config CONFIG4L = 0x81
//__CONFIG(5, STVREN_ON & LVP_OFF & XINST_OFF);
#pragma config CONFIG5L = 0x0
//__CONFIG(6, CP0_ON & CP1_ON & CP2_ON & CP3_ON);
#pragma config CONFIG5H = 0xC0
//__CONFIG(7, CPB_OFF & CPD_OFF);
#pragma config CONFIG6L = 0xF
//__CONFIG(8, WRT0_OFF & WRT1_OFF & WRT2_OFF & WRT3_OFF);
#pragma config CONFIG6H = 0xE0
//__CONFIG(9, WRTC_OFF & WRTB_OFF & WRTD_OFF);
#pragma config CONFIG7L = 0xF
//__CONFIG(10, EBTR0_OFF & EBTR1_OFF & EBTR2_OFF & EBTR3_OFF);
#pragma config CONFIG7H = 0x40
//__CONFIG(11, EBTRB_OFF);


#endif	/* CONFIG_H */

