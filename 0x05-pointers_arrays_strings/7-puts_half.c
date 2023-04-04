#include <stdio.h>
#include <string.h>

/**
* puts_half - a function that prints half of a string
*
* @str: the string to divide
*
*/

void puts_half(char *str)
{
	int len = strlen(str);

	for (len /= 2; str[len] != '\0'; len++)
	{

		printf("%c", str[len]);
	}
	printf("\n");
}
