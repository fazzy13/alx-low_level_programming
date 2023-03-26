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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
