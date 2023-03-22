#include <stdio.h>

/**
* main - entry point of the programm
*
* Return: exit point of the programm
*
*/

int main(void)
{
	int num1 num2;

	for (num1 = 0; num1 <= 10; num1++)
	{
		for (num2 = num1+1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (i != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
