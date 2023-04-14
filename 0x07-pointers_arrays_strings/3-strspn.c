/**
 * _strspn - Gets the length of a prefix substring
 * @s: The input string
 * @accept: The string containing the characters to be matched
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 * Description: The function iterates through the input string s
 * character by character, comparing each
 * character with the characters in the accept string. It counts the
 * number of bytes in the initial segment
 * of s that consist only of bytes from accept, and returns the count.
 *
 * FYI: The standard library provides a similar function: strspn.
 * Run man strspn to learn more.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;
	int match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				match = 1;
				break;
			}
		}
		if (!match)
			break;

		match = 0;
	}
	return (len);
}
