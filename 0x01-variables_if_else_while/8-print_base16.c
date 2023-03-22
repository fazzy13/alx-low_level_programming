#include <stdio.h>

/**
* main - Entry point to find base 16
*
* Return: exit point after finding base 16
*
*/

int main(void)
{
	int i;

	/*print numbers*/
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	/*print alphabets*/
	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}

	/*newline characters*/
	putchar('\n');

	return (0);
}
