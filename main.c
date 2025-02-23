#include <reg51.h>
#include "asciitobcd.h"
void main()
{
	
	char packed_bcd=0x47;
	char higher=0x34;
	char lower=0x37;
	struct ascii as;
	as=converttoascii(packed_bcd);
	
	P1=as.high_byte;
	P2=as.low_byte;
	
	
	P0=converttobcd(higher, lower);
	
	
	
}