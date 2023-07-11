#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = allocate_buffer(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read_from_file(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free_buffer(buffer);
		return (0);
	}

	bytes_written = write_to_stdout(buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_descriptor);
		free_buffer(buffer);
		return (0);
	}

	close(file_descriptor);
	free_buffer(buffer);
	return (bytes_written);
}

/**
 * allocate_buffer - Allocates memory for a buffer.
 * @size: The size of the buffer to allocate.
 *
 * Return: A pointer to the allocated buffer, or NULL on failure.
 */
char *allocate_buffer(size_t size)
{
	char *buffer = malloc(sizeof(char) * (size + 1));

	return (buffer);
}

/**
 * read_from_file - Reads data from a file.
 * @file_descriptor: The file descriptor of the file to read from.
 * @buffer: The buffer to store the read data.
 * @size: The number of bytes to read.
 *
 * Return: The number of bytes read, or -1 on failure.
 */
ssize_t read_from_file(int file_descriptor, char *buffer, size_t size)
{
	ssize_t bytes_read = read(file_descriptor, buffer, size);

	return (bytes_read);
}

/**
 * write_to_stdout - Writes data to the POSIX standard output.
 * @buffer: The buffer containing the data to write.
 * @size: The number of bytes to write.
 *
 * Return: The number of bytes written, or -1 on failure.
 */
ssize_t write_to_stdout(const char *buffer, size_t size)
{
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, size);

	return (bytes_written);
}

/**
 * free_buffer - Frees the memory allocated for a buffer.
 * @buffer: The buffer to free.
 */
void free_buffer(char *buffer)
{
	free(buffer);
}

