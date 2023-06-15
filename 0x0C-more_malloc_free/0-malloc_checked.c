#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate in bytes
 *
 * Description: This function allocates memory of size @b using malloc().
 * If malloc() fails to allocate memory, the function terminates the
 * process with an exit status of 98.
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		/* If malloc() fails, terminate process with exit status 98 */
		exit(98);
	}

	return (ptr);
}
