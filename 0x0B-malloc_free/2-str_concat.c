#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: Pointer to the first input string
 * @s2: Pointer to the second input string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1 = 0, len2 = 0;

	/* Check if either input string is NULL */
	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	/* Allocate memory for the concatenated string */
	concat = (char *)malloc(len1 + len2 + 1);

	/* Check if memory allocation was successful */
	if (concat == NULL)
	{
		return NULL;
	}

	/* Copy the first input string to the concatenated string */
	if (s1 != NULL)
		strcpy(concat, s1);
	else
		concat[0] = '\0';

	/* Concatenate the second input string to the concatenated string */
	if (s2 != NULL)
		strcat(concat, s2);

	return concat;
}

