#include "main.h"
#include <stddef.h>
/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * @s: Pointer to a null-terminated string to be printed.
 *
 * Description: function recursively prints a string @s followed by a new line
 * to the standard output. It starts printing the string from first character
 * and continues until the null terminator is encountered.
 *
 * Return: None (void).
 *
 * Usage: _puts_recursion("Hello, world!");
 *        _puts_recursion("Welcome to Recursion!");
 */
void _puts_recursion(char *s)
{
	if (*s == '\0' || s == NULL)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
