#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Description: This function prints anything based on the format provided.
 *              Supported format specifiers are:
 *              - c: char
 *              - i: integer
 *              - f: float
 *              - s: char * (if the string is NULL, print (nil) instead)
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] && !j)
			printf(", ");
		i++;
		j = 0;
	}
	va_end(args);
	printf("\n");
}
