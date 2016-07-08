#include <htc.h>
// used HI-TECH C Compiler V9.83
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);
// HS oscillator , WDT disabled
//Power-up Timer is enabled , Code protection disabled

#define _XTAL_FREQ 20000000 //20MHz
void main()
{
	TRISB = 0x00; //PORT B 全出力
	while(1)
	{ // 横に流れてくだけ
		PORTB = 0x0F;
		__delay_ms(250);
		PORTB = 0x0E;
		__delay_ms(250);
		PORTB = 0x0C;
		__delay_ms(250);
		PORTB = 0x08;
		__delay_ms(250);
		PORTB = 0x00;
		__delay_ms(250);
		PORTB = 0x01;
		__delay_ms(250);
		PORTB = 0x03;
		__delay_ms(250);
		PORTB = 0x07;
		__delay_ms(250);
		PORTB = 0x0F;
	}
}