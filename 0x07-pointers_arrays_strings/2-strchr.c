/**
 * find_char - Find a character in a string
 * @str: Pointer to the string to search
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*str != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        str++;
    }
    return (NULL);
}

