#include <stdio.h>

/**
* main - programm starts here
*
* Return: return the sum of multiples
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i <= 1023; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
