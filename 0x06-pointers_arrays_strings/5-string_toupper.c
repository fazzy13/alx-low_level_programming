/**
* string_toupper - a function that changes all lowercase letters of a string to uppercase
*
* @str: string to convert
*
* Return: return the str result
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;	
		}
	}
	return (str);
}
