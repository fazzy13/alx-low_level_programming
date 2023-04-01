#include <string.h>
#include <stdio.h>

/**
* print_rev -  function that prints a string, in reverse.
*
* @s: string to be reversed
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
