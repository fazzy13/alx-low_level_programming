#include <ctype.h>
#include <stdbool.h>
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
	bool new_word = true;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && islower(str[i]))
		{

			str[i] = toupper(str[i]);
		}


		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}' || str[i] == '\0')
		{
			new_word = true;
		}
		else
		{
			new_word = false;
		}
	}
	return (str);
}
