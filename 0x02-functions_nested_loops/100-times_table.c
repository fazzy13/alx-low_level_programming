#include "main.h"
#include <stdio.h>

void print_times_table_row(int n, int multiplier);
void print_times_table(int n);

/**
 * print_times_table_row - print a row of the n times table
 * @n: integer argument
 * @multiplier: integer argument to multiply by
 *
 */
void print_times_table_row(int n, int multiplier)
{
    int result = n * multiplier;
    int digit1, digit2, digit3;

    if (result > 99)
    {
        digit1 = result / 100;
        digit2 = (result / 10) % 10;
        digit3 = result % 10;
        putchar(',');
        putchar(' ');
        putchar(digit1 + '0');
        putchar(digit2 + '0');
        putchar(digit3 + '0');
    }
    else if (result > 9)
    {
        digit1 = result / 10;
        digit2 = result % 10;
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        _putchar(digit1 + '0');
        _putchar(digit2 + '0');
    }
    else
    {
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        _putchar(' ');
        _putchar(result + '0');
    }
}

/**
 * print_times_table - print the n times table
 * @n: integer argument
 *
 */
void print_times_table(int n)
{
	int i, j;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        _putchar('0');

        for (j = 1; j <= n; j++)
        {
            print_times_table_row(j, i);
        }
        _putchar('\n');
    }
}

