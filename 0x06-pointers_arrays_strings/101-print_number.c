#include "main.h"

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 * Return: return digit
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + (i % 10));
}
