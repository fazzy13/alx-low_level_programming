#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the contents of  struct dog, including its
 * name, age, and owner. when the elements are NULL, it prints "(nil)" instead.
 * If the struct dog pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}

