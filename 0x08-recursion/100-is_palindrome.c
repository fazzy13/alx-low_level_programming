#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int check_palindrome(char *s, int start, int end);
	
    int len = strlen(s);
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

