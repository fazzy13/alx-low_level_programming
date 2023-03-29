#include "main.h"

/**
* print_square - a function that prints a square
*
* @size: size is the size of the square
*
*/

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
