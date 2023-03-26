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
	
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
