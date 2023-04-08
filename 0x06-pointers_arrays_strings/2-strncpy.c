#include "main.h"
#include <string.h>
/**
* _strncpy - a function that copies a string
*
* @dest: destination string 
*
* @src: source string
*
* @n: nth of the string
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i

	for (i = 0 src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0'; 
}
