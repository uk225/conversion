#include<reg51.h>
#include "asciitobcd.h"


char converttobcd(char high_byte, char low_byte)
{
	char a,b;
	a=((high_byte & 0x0f) <<4);
	b=(low_byte & 0x0f);
	return  a + b;
}
struct ascii converttoascii(char packed_bcd)
{
	struct ascii ac;
	
	 ac.high_byte =(0x30 + ((packed_bcd & 0xf0) >> 4));
	 ac.low_byte =  (0x30 + (packed_bcd & 0x0f));
	return ac;
}
