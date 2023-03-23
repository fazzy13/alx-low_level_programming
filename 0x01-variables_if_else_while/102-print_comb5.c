#include <stdio.h>

/**
* main - Entry point of the programm
*
* Return: Exit point of the programm
*
*/

/**
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
*/
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
	{
        for (j = i; j < 10; j++)
		{
            putchar('0' + i);
            putchar('0' + j);
            if (i != 9 || j != 9)
			{
                putchar(',');
                putchar(' ');
            }
        }
    }

    for (i = 1; i < 10; i++)
	{
        for (j = 0; j < i; j++)
		{
            putchar('0' + i);
            putchar('0' + j);
            if (i != 9 || j != 8)
			{
                putchar(',');
                putchar(' ');
            }
        }
    }
	putchar('\n');

    return 0;
}

