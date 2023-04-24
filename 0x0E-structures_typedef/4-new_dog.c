#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog with given name, age, and owner
 * @name: Pointer to a character string representing the name of the dog
 * @age: Floating-point value representing the age of the dog
 * @owner: Pointer to a character string representing the owner of the dog
 *
 * Return: Pointer to the newly created struct dog,
 * or NULL if memory allocation fails
 *
 * Description: This function creates a new struct
 * dog with the given name, age, and owner.
 * It allocates memory for the new struct dog and
 * copies the given name and owner into the
 * newly allocated memory. If memory allocation fails, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	nameLen = strlen(name) + 1;
	ownerLen = strlen(owner) + 1;

	newDog->name = malloc(nameLen * sizeof(char));
	newDog->owner = malloc(ownerLen * sizeof(char));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strncpy(newDog->name, name, nameLen);
	strncpy(newDog->owner, owner, ownerLen);
	newDog->age = age;

	return (newDog);
}

