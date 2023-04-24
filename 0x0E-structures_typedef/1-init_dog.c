#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function takes a pointer to a struct dog and initializes
 * its members with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check for NULL pointer */
	if (d == NULL)
	{
		/* Handle error or return an error code */
		return;
	}

	/* Initialize the struct members */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
