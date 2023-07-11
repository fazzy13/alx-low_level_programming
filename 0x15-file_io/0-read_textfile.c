#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
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

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = allocate_buffer(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = read_from_file(buffer, letters, file);
	if (bytes_read == -1)
	{
		fclose(file);
		free_buffer(buffer);
		return (0);
	}

	bytes_written = write_to_stdout(buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		fclose(file);
		free_buffer(buffer);
		return (0);
	}

	fclose(file);
	free_buffer(buffer);
	return (bytes_written);
}

/**
 * allocate_buffer - Allocates memory for the buffer.
 * @letters: The number of letters to read.
 *
 * Return: A pointer to the allocated buffer, or NULL on failure.
 */
char *allocate_buffer(size_t letters)
{
	char *buffer;

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Failed to allocate buffer\n");
		return (NULL);
	}

	return (buffer);
}

/**
 * read_from_file - Reads from the file into the buffer.
 * @buffer: The buffer to store the read data.
 * @letters: The number of letters to read.
 * @file: The file to read from.
 *
 * Return: The number of bytes read, or -1 on failure.
 */
ssize_t read_from_file(char *buffer, size_t letters, FILE *file)
{
	ssize_t bytes_read;

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Failed to read from file\n");
		return (-1);
	}

	return (bytes_read);
}

/**
 * write_to_stdout - Writes the buffer to the standard output.
 * @buffer: The buffer to write.
 * @bytes: The number of bytes to write.
 *
 * Return: The number of bytes written, or -1 on failure.
 */
ssize_t write_to_stdout(const char *buffer, size_t bytes)
{
	ssize_t bytes_written;

	bytes_written = fwrite(buffer, sizeof(char), bytes, stdout);
	if (bytes_written == -1)
	{
		fprintf(stderr, "Error: Failed to write to standard output\n");
		return (-1);
	}

	return (bytes_written);
}

/**
 * free_buffer - Frees the memory allocated for the buffer.
 * @buffer: The buffer to free.
 */
void free_buffer(char *buffer)
{
	free(buffer);
}

