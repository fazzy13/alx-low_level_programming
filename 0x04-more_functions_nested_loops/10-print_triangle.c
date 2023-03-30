#include "main.h"

/**
* print_triangle -  a function that prints a triangle, followed by a new line.
*
* @size: print where size is the size of the triangle
*
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
