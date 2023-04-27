#include <stdio.h>
#include <stdlib.h>

/**
 * print_main_opcodes - Prints the opcodes of the main function
 * @num_bytes: Number of bytes to print
 */
void print_main_opcodes(int num_bytes)
{
	int i;
	char *main_ptr;

	if (num_bytes < 0)
	{
		printf("Error: Number of bytes cannot be negative\n");
		exit(2);
	}

	main_ptr = (char *)&print_main_opcodes;

	printf("Main function opcodes:\n");

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_ptr[i] & 0xff);
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error: Incorrect number of arguments\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	print_main_opcodes(num_bytes);

	return (0);
}

