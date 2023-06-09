/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to be used for filling
 * @n: Number of bytes to be filled
 *
 * Description: The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b. Returns a pointer to the
 * memory area s.
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

