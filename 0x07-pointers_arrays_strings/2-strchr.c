#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found
 */
char *_strchr(char *s, char c)
{
	int ind = 0;

	while (s[ind] >= '\0')
	{
		if (s[ind] == c)
			return (s + ind);

		ind++;
	}

	return ('\0');
}
