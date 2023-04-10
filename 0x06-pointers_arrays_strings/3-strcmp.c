#include <string.h>
/**
* _strcmp - a function that compares two strings.
*
* @s1: first string
*
* @s2: second string
*
* Return: Always (0)
*/
int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int i;

	for (i = 0; s1_len[i] != '\0' && s2_len[i] != '\0'; i++)
	{

		if (s1_len[i] != s2_len[i])
		{
			s1_len[i] - s2_len[i];
		}
	}
	return (0);
}
