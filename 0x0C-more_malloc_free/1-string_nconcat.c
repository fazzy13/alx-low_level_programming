#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated memory block containing the concatenated
 * string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated = NULL;
	unsigned int i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Use entire string s2 if n is greater or equal to its length */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concatenated = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy first n bytes of s2 to concatenated string */
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}

