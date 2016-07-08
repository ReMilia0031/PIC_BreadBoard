#include <htc.h>
// used HI-TECH C Compiler V9.83
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);
// HS oscillator , WDT disabled
//Power-up Timer is enabled , Code protection disabled

//箱丸っぽいアレ

#define _XTAL_FREQ 20000000 //20MHz
void main()
{
	int i;
	TRISA = 0xFF;
	TRISB = 0x00;
	while(1)
	{
		if (RA2 == 0) 
		{
				PORTB = 0x07;
				__delay_ms(100);
				PORTB = 0x0B;
				__delay_ms(100);
				PORTB = 0x0D;
				__delay_ms(100);
				PORTB = 0x0E;
				__delay_ms(100);
		}
		else
		{
			PORTB = 0x0F;
			__delay_ms(400);
			PORTB = 0x07;
			__delay_ms(400);
			PORTB = 0x0B;
			__delay_ms(400);
			PORTB = 0x0D;
			__delay_ms(400);
			PORTB = 0x0E;
			__delay_ms(400);
			PORTB = 0x0F;
			__delay_ms(500);
			PORTB = 0x00;
			__delay_ms(1000);
			PORTB = 0x0F;
			__delay_ms(100);
	
			for (i = 0; i < 3; i++)
			{
				PORTB = 0x07;
				__delay_ms(100);
				PORTB = 0x0B;
				__delay_ms(100);
				PORTB = 0x0D;
				__delay_ms(100);
				PORTB = 0x0E;
				__delay_ms(100);
			}
			__delay_ms(100);
			PORTB = 0x00;
			__delay_ms(1000);
			PORTB = 0x07;
			__delay_ms(5000);
		}
	}
}