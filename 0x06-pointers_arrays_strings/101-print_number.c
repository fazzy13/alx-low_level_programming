#include "main.h"

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;
	int digit = (n / divisor) % 10;

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while ((n / divisor) >= 10)
		divisor *= 10;

	if (is_negative)
		_putchar('-');

	while (divisor > 0)
	{
		_putchar('0' + digit);
		divisor /= 10;
	}
}

