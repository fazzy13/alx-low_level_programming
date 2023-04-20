#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string in newly allocated memory
 * @str: Pointer to the input string
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Get the length of the input string */
	len = strlen(str);

	/* Allocate memory for the duplicated string */
	dup = (char *)malloc(len + 1);

	/* Check if memory allocation was successful */
	if (dup == NULL)
	{
		return (NULL);
	}

	/* Copy the input string to the newly allocated memory */
	strcpy(dup, str);

	return (dup);
}
