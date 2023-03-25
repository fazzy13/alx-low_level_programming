#include "main.h"

/**
* print_alphabet - Prints the characters in lower
*
*Retrun: exit always 0
*
*/

void print_alphabet(void)
{
	char lower = 97;

	while (lower != 123)
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
