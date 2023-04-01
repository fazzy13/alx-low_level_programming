#include <stdio.h>

/**
* puts2 - function that prints every other character of a string
*
* @str: string to be printed
*
*/
void puts2(char *str)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");	
}
