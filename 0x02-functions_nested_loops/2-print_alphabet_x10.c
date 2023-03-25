#include "main.h"

/**
* print_alphabet_x10 - Print A - Z  in ten lines
*
* @void: return void
*
*/
void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (lower = 97; lower <= 122; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
