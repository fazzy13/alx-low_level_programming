#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		unsigned char c;
	} check_endian;

	check_endian.i = 1;

	/* If the least significant byte is 1, it is little endian */
	if (check_endian.c == 1)
		return (1);
	else
		return (0);
}

