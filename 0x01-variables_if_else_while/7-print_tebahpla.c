#include <stdio.h>

/**
* main - Entry point of the programm
*
* Return: the exit point of the programm
*
*/

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
