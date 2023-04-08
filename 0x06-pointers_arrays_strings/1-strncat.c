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
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[dest_len] != src[n]; i++)
		dest[i] = src[dest_len];
	dest[count] = '\0';

	return dest;
	
}
