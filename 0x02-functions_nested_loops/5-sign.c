#include <ctype.h>
#include "main.h"

/**
* print_sign - Print numbers and its sign
*
* @n: number to return
*
* Return: what the programm returns
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (_putchar('1'));
	}
	else if (n == 0)
	{
		return (_putchar('1'));
	}
	else if (n < 0)
	{
		return (_putchar('-1'));
	}
	else
	{
		return (void);
	}
}
