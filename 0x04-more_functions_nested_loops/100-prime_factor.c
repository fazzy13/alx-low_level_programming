#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: return the largest prime factor
*
*/

int main(void)
{
	long int  num = 612852475143;
	long int largest_factor = 0;
	long int factor = 2;

	while (num > 1)
	{
		if (num %  factor == 0)
		{
			largest_factor /= factor;
			largest_factor = factor;
		}
		factor++;
	}
	printf("%ld\n", largest_factor);
	return (0);
}
