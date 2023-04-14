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

	char *s_ptr = s;
	char *accept_ptr;

   while (*s_ptr != '\0')
    {
        accept_ptr = accept;
        while (*accept_ptr != '\0')
        {
            if (*s_ptr == *accept_ptr)
                return s_ptr;
            accept_ptr++;
        }
        s_ptr++;
    }

    return NULL;	

}

