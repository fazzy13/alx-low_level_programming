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
	int i;
	int half = (len - 1) / 2;

	for (i = half; i <= len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
