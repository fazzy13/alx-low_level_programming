#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	while (*s)
	{
		int ind = 0;

		while (accept[ind])
		{
			if (*s == accept[ind])
			{
				bytes++;
				break;
			}

			else if (accept[ind + 1] == '\0')
				return (bytes);
			ind++;
		}
		s++;
	}

	return (bytes);
}
