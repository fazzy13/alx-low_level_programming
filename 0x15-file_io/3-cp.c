#include "main.h"

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, const char *message, ...)
{
    va_list args;
    va_start(args, message);
    fprintf(stderr, "Error: ");
    vfprintf(stderr, message, args);
    fprintf(stderr, "\n");
    va_end(args);
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

    // open source file for reading
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Can't read from file %s", file_from);

    // open destination file for writing (truncate if exists)
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
    if (fd_to == -1)
        error_exit(99, "Can't write to file %s", file_to);

    // copy file content
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_exit(99, "Can't write to file %s", file_to);
    }

    if (bytes_read == -1)
        error_exit(98, "Can't read from file %s", file_from);

    // close file descriptors
    if (close(fd_from) == -1)
        error_exit(100, "Can't close file descriptor %d", fd_from);
    if (close(fd_to) == -1)
        error_exit(100, "Can't close file descriptor %d", fd_to);
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
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    cp_file(argv[1], argv[2]);
    return 0;
}
