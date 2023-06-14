#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to a new string containing the concatenated arguments,
 *         or NULL if ac == 0 or av == NULL or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, pos = 0, i, j;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate total length of concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	/* Allocate memory for the result string */
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	/* Copy arguments to result string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[pos++] = av[i][j];
		}
		result[pos++] = '\n';
	}
	result[pos] = '\0';

	return (result);
}
