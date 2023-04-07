#include "main.h"
#include <string.h>
/**
* _strcat - a function that concatenates two strings.
*
* @dest: the dest string
*
* @src: the src string
*
* Return: Returns a pointer to the resulting string dest
*
*/
char *_strcat(char *dest, char *src)
{
	char dest_length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
