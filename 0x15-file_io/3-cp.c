#include "main.h"

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * cp_file - Copies the content of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	/* open sourcefile for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	/* open desitination file for writing (truncate if exit) */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | PERMISSIONS);
	if (fd_to == -1)
		error_exit(99, "Error: Cant write to file");

	/* copy file content */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");


	/* close file descriptors */
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close source file descriptor");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close destination file descriptor");
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success, 97 on incorrect number of arguments.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	cp_file(argv[1], argv[2]);
	return (0);
}
