#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a character string representing the name of the dog
 * @age: Floating-point value representing the age of the dog
 * @owner: Pointer to a character string representing the owner of the dog
 *
 * Description: This structure defines a dog with its name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
