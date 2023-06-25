#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 *
 * @name: Pointer to a character string representing the name
 * @f: Pointer to a function that takes a character string as
 * an argument and performs an operation
 *
 * Description: This function takes a name and a function pointer as arguments,
 * and invokes the function pointed to by f with the name argument.
 * If name or f is NULL, the function does nothing.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

