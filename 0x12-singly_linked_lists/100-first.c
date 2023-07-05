#include <stdio.h>

/**
 * pre_main - prints a message before main is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
