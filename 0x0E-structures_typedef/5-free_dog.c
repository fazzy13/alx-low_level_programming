#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to a struct dog to be freed
 *
 * Description: This function frees the memory
 * allocated for a struct dog, including
 * the memory allocated for the name and owner strings
 * within the struct. If d is NULL,
 * the function does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

