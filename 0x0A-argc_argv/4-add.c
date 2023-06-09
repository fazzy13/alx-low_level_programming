#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum;

	/* Check if the program was called with at least one argument*/
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		/* Loop through each character in the argument*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Check if the character is not a digit*/
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add to the sum */
		num = atoi(argv[i]);
		sum += num;
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
