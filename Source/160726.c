#include <htc.h>
// used HI-TECH C Compiler V9.83
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);
// HS oscillator , WDT disabled
//Power-up Timer is enabled , Code protection disabled
#define _XTAL_FREQ 20000000 //20MHz

//Full Color LED Test
//Used OSTA5131A
void main()
{
	int flags;
	int stateFlags;
	int lastFlags;
	int r;
	int g;
	int b;
	TRISA = 0xFF;
	TRISB = 0x00;
	stateFlags = 0;
	lastFlags = 0;
	while(1)
	{
		flags = 0;
		flags |= RA0 ? 0x00 : 0x24;
		flags |= RA1 ? 0x00 : 0x81;
		flags |= RA2 ? 0x00 : 0x42;
		flags |= RA3 ? 0x00 : 0x18;
		stateFlags ^= (flags ^ lastFlags) & flags;
		PORTB = stateFlags;
		lastFlags = flags;
		__delay_ms(10);
	}
}