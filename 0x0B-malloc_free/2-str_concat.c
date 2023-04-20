#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * concat_strings - Concatenate two strings
 * @s1: Pointer to the first input string
 * @s2: Pointer to the second input string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *concat_strings(char *s1, char *s2)
{
	char *concat;
	size_t len1, len2;

	/* Check if either input string is NULL */
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	/* Get the lengths of the input strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Allocate memory for the concatenated string */
	concat = (char *)malloc(len1 + len2 + 1);

	/* Check if memory allocation was successful */
	if (concat == NULL)
	{
		return (NULL);
	}

	/* Copy the first input string to the concatenated string */
	strcpy(concat, s1);

	/* Concatenate the second input string to the concatenated string */
	strcat(concat, s2);

	return (concat);
}
