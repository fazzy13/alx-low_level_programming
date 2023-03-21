#include <stdio.h>

/**
* main - entry point of the programm
*
*Return: the exit of the programm
*
*/
int main(void)
{
	char c;

	/*lowwercase character*/
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/*uppercase chracter*/
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	/*newline character*/
	putchar('\n');

	return (0);
}
