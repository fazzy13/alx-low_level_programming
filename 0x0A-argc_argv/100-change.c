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
	int coins;
	int cents;

    /* Check if the program was called with exactly one argument */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

    /* Convert the argument to an integer */
	cents = atoi(argv[1]);

    /* Check if the value is negative, print 0 if it is */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the minimum number of coins */
	coins = 0;
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	/* Print the result */
	printf("%d\n", coins);

	return (0);
}
