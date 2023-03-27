#include <stdio.h>
/**
* main - starting point of the programm
*
* Return:  exit of the programm
*/

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long i, next_num;

	printf("%ld, %ld", num1, num2);

	for (i = 3; i <= 98; i++)
	{
		next_num = num1 + num2;
		printf(", %ld", next_num);
		num1 = num2;
		num2 = next_num;
	}

	printf("\n");

	return (0);
}

