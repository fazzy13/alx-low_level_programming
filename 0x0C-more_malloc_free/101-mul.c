#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2);
int main(int argc, char *argv[]);


/**
 * multiply - Function to multiply two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Description: This function multiplies two positive numbers and prints the result.
 * If either input is not a valid positive number, an error message is printed and
 * the program exits with a status of 98.
 */
void multiply(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);
	int result;

	if (n1 <= 0 || n2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = n1 * n2;

	printf("%d\n", result);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: This is the main function of the program. It validates the input
 * arguments and calls the multiply function to perform the multiplication.
 * If any error occurs, an error message is printed and the program exits with
 * a status of 98.
 *
 * Return: 0 on success, other values on error
 */
int main(int argc, char *argv[])
{
	size_t i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* Validate that both arguments are composed of digits */
	for (i = 1; i < (size_t)argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	/* Call the multiply function with the input numbers */
	multiply(argv[1], argv[2]);

	return (0);
}
