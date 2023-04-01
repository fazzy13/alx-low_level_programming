#include <string.h>

/**
* rev_string - function that reverses a string.
*
* @s: string to reverse
*/
void rev_string(char *s)
{
	char len = strlen(s);
	int i = 0;
	char j = len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++, j--;
	}
}
