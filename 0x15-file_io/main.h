#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *allocate_buffer(size_t letters);
ssize_t read_from_file(char *buffer, size_t letters, FILE *file);
ssize_t write_to_stdout(const char *buffer, size_t bytes);
void free_buffer(char *buffer);

#endif /* MAIN_H */

