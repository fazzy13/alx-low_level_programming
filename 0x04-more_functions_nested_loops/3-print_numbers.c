#include "main.h"

/**
* print_numbers - print numbers 0 - 9
*
* Result: exit point of the programm
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
