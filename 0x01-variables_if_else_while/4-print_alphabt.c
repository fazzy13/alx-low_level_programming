#include <stdio.h>

/**
* main - The entry point of the programm
*
* Return: the exit of the programm
*
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' && c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
