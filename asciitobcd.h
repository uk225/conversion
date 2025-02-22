#ifndef __ASCII_H__

#define __ASCII_H__

char converttobcd(char higer, char lower);
struct ascii converttoascii(char packed_bcd);
struct ascii
{
	char high_byte;
	char low_byte;
	
};

#endif