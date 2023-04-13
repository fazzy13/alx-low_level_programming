/**
 * _strchr - Find a character in a string
 * @s: Pointer to the string to search
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
		else if (* != c)
		{
			return (NULL);
		}
        s++;
    }
}

