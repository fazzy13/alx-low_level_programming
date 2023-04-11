#include <ctype.h>

/**
 * leet - Encodes a string into "1337" or "Leet" language.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_chars[] = {'A', 'E', 'O', 'T', 'L'};
	char leet_replacements[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*ptr)
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == leet_chars[i] || *ptr == tolower(leet_chars[i]))
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
