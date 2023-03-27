#include <stdio.h>

/**
* main - print even numers of fibonnacci
*
* Return: the exit point of the programm
*/

int main(void)
{
	int first_term = 1;
	int second_term = 2;
	int sum = 0;
	int current_term = second_term;
	int next_term;

	while (current_term <= 4000000)
	{
		if (current_term % 2 == 0)
		{
			sum += current_term;
		}
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
		current_term = second_term;
	}
	printf("%d\n", sum);
	return (0);
}
