#include <stdio.h>

/**
* main - the start point of the programm
*
* Return: return success
*/
int main(void)
{
	long long int num1 = 1;
	int long int num2 = 2;
	int long int next_num;
	int count = 0;

	printf("%lld, %lld", num1, num2);

	while (count < 47)
	{
		printf(", ");
		next_num = num1 + num2;

		num1 = num2;
		num2 = next_num;
		printf("%lld", next_num);
		count++;
	}
	putchar('\n');
	return (0);
}
