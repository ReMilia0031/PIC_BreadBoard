#include <htc.h>
// used HI-TECH C Compiler V9.83
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);
// HS oscillator , WDT disabled
//Power-up Timer is enabled , Code protection disabled

#define _XTAL_FREQ 20000000 //20MHz
void main()
{
	TRISA = 0xFF; //PORT A 全入力
	TRISB = 0x00; //PORT B 全出力
	while(1)
	{
		if (RA3 == 0) // RA3 がGNDに落ちてる時 RB0,1 と RB2,3 を交互に
		{
			PORTB = 0x0C; 
			__delay_ms(500);
			PORTB = 0x03;
			__delay_ms(500);
		}
		else // そうじゃない時は横に流れてくだけ
		{
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
}