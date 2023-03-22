#include <stdio.h>

/**
*main - entry point of the programm
*
*Return: the exit point of the programm
*
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
	putchar('\n');
	return (0);
}
