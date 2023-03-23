#include <stdio.h>

/**
* main - entry point of the programm
*
* Return: exit point of the programm
*
*/

int main(void)
{
	int num1, num2;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = (num2 + 1); num1 <= '9'; num1++)
		{
			putchar(num2);
			putchar(num1);
			if (num2 != '8' || num1 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
