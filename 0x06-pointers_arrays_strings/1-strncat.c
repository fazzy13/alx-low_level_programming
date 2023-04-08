#include "main.h"
#include <string.h>
/**
* _strncat -  a function that concatenates two strings.
*
* @dest: destination string to concatinate
*
* @src: the source string to concatinate
*
* @n: n bytes from src
*
* Return: Return a pointer to the resulting string dest
*
*/
char *_strncat(char *dest, char *src, int n)
{
	char dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
