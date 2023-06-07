#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 *
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function prints a string in reverse order
 * using recursion. It uses a base case to terminate the recursion
 * when the end of the string is reached, and recursively calls itself
 * with an incremented pointer to the next character in the string
 * until the entire string has been printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
