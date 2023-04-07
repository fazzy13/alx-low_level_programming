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
	int n;

	for (i = 0; i < n; && src[i] != '\0' i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
