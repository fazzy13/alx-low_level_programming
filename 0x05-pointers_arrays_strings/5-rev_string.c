#include <string.h>

/**
* rev_string - function that reverses a string.
*
* @s: string to reverse
*/
void rev_string(char *s)
{
	char len = strlen(s);
	int i, j;

	while (i >= 0)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
	}
}
