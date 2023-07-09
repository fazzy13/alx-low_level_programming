/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid chars or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);

	/* Iterate through each character of the string */
	for (; *b; b++)
	{
		/* Check if the character is a valid binary digit */
		if (*b != '0' && *b != '1')
			return (0);

		/* Convert the character to an integer and append to the result */
		bit = *b - '0';
		result = (result << 1) | bit;
	}

	return (result);
}

