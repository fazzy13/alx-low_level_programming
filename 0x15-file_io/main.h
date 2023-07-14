#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <elf.h>

/* Function prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

char *allocate_buffer(size_t size);
ssize_t read_from_file(int file_descriptor, char *buffer, size_t size);
ssize_t write_to_stdout(const char *buffer, size_t size);
void free_buffer(char *buffer);
ssize_t read_textfile(const char *filename, size_t letters);



#endif /* MAIN_H */

