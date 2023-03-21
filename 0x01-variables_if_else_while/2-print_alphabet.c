#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: the program retuns 0 and exit
*
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
