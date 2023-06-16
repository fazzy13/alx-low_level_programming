#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size to be allocated */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Set allocated memory to zero */
	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
