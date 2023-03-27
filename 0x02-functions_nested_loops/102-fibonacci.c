#include <stdio.h>

/**
* main - the start point of the programm
*
* Return: return success
*/
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int next_num;
	int count = 0;

	printf("%ld, %ld", num1, num2);

	while (count < 48)
	{
		printf(", ");
		next_num = num1 + num2;

		num1 = num2;
		num2 = next_num;
		printf("%ld", next_num);
		count++;
	}
	putchar('\n');
	return (0);
}
