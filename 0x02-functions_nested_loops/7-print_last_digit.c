#include "main.h"

/**
* print_last_digit - fuction prints the last digit of int
*
* @num:  the last digit that will be returned.
*
* Return: return the last value
*/

int print_last_digit(int num)
{

	int last_digit;

	if (num < 0)
	{
		num *= -num;
	}

	last_digit = num % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
