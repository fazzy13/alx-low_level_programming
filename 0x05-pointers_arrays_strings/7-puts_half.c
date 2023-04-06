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
	int start = len % 2 == 0 ? len / 2 : (len / 2) + 1;


	for (; str[start] != '\0'; start++)
	{

		printf("%c", str[start]);
	}
	printf("\n");
}
