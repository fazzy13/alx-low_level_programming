/**
 * _strpbrk - Locates the first occurrence of any byte in accept in s.
 *
 * @s: Pointer to the input string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the first occurrence of a matching byte in s, or NULL if
 *         no matching byte is found.
 *
 * Description: The function searches the string s for the first occurrence of
 * any byte in the string accept. returns a pointer to the matching byte in s,
 * or NULL if no matching byte found. The standard library provides a similar
 * function: strpbrk. Run 'man strpbrk' for more information.
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);	
}
