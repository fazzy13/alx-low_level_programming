#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file in read mode */
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	/* Read from the file */
	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	/* Print the contents to the standard output */
	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	/* Clean up and return the number of letters read and printed */
	fclose(file);
	free(buffer);
	return (bytes_written);
}

