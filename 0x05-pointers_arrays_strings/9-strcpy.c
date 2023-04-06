#include <string.h>

/**
* _strcpy - Write a function that copies the string pointed to by src, 
* including the terminating null byte (\0), to the buffer pointed to by dest
*
* @src: the string pointed to, called src, including the terminating null byte (\0).
* @dest: to the buffer pointed to by dest.
* Return: Return value: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int str = strlen(src);
	int i;

	for (i = str; i >= str; i++)
	{
		*dest = i;
	}
	dest = '\0';

	return dest;
}
