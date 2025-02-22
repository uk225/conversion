#include <reg51.h>
#include "asciitobcd.h"
void main()
{
	
	char packed_bcd=0x47;
	struct ascii as;
	as=converttoascii(packed_bcd);
	
	P1=as.high_byte;
	P2=as.low_byte;
	
}