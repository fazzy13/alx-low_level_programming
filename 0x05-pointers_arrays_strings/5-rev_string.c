#include <string.h>

/**
* rev_string - function that reverses a string.
*
* @s: string to reverse
*/
void rev_string(char *s)
{
	char str_copy = strdup(s);

	strrev(str_copy);
}
