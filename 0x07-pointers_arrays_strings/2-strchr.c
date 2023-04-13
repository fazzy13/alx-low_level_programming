#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the input string
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return NULL;

	while (*s != '\0' && *s != c)
		s++;

	if (*s == c)
		return (s);

	return (NULL);
}

