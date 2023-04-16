/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int _strlen(char *s);
	int check_palindrome(char *s, int start, int end);
	
    int len = _strlen(s);
    return check_palindrome(s, 0, len - 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: Pointer to the input string.
 * @start: Starting index for comparison.
 * @end: Ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return len;
}

