#include <ctype.h>
#include <string.h>
/**
* cap_string - a function that capitalizes all words of a string.
*
* @str: the string to convert
*
* Return: Return str
*/
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);
	int shift;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			shift = 1;
		}
		else if (shift)
		{
			str[i] = toupper(str[i]);
			shift = 0;
		}
	}

	return (str);
}
