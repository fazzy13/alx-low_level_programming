#include <stdio.h>
#include "main.h"


void print_hex(char *b, int size);
void print_ascii(char *b, int size);
void print_buffer(char *b, int size);
/**
 * print_hex - prints hexadecimal representation of buffer content
 * @b: pointer to the buffer
 * @size: size of the buffer
 *
 * Description: This function prints the hexadecimal representation of size
 * bytes of the buffer pointed by b. Output is formatted to show 10 bytes per
 * line, with the hexadecimal representation of the bytes separated by spaces.
 * Each line starts with the position of the first byte of the line in
 * hexadecimal (8 chars), starting with 0. This function is a helper function
 * used by print_buffer.
 */
void print_hex(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2 != 0 && i + j < size - 1)
				printf(" ");
		}

		printf("\n");
	}
}

/**
 * print_ascii - prints ASCII representation of buffer content
 * @b: pointer to the buffer
 * @size: size of the buffer
 *
 * Description: This function prints the ASCII representation of size bytes of
 * the buffer pointed by b. Output is formatted to show 10 bytes per line, with
 * the corresponding printable characters (if applicable), separated by spaces.
 * Each line ends with a new line \n. This function is a helper function used
 * by print_buffer.
 */
void print_ascii(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
					printf("%c", *(b + i + j));
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 *
 * Description: This function prints the content of size bytes of the buffer
 * pointed by b. Output is formatted to show 10 bytes per line, with the
 * hexadecimal representation of the bytes, followed by the corresponding
 * printable characters (if applicable), separated by spaces. Each line starts
 * with the position of the first byte of the line in hexadecimal (8 chars),
 * starting with 0. Each line ends with a new line \n. If size is 0 or less,
 * the output is a new line only \n. This function uses the standard library
 * for printing.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	print_hex(b, size);
	print_ascii(b, size);
}

