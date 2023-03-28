#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
*/

void more_numbers(void)
{
	int col, row;

	for (col = 0; col < 11; col++)
	{
		for (row = 0; row < 15; row++)
		{
			_putchar(row + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
