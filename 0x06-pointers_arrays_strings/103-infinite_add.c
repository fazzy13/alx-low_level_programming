#include <stdio.h>
#include "main.h"

/* Function prototypes */
int add_digits(int d1, int d2, int carry);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_digits - helper function to add two digits with carry-over
 * @d1: digit one
 * @d2: digit two
 * @carry: carry-over from previous operation
 *
 * Return: sum of d1, d2, and carry
 */
int add_digits(int d1, int d2, int carry)
{
	int sum = d1 + d2 + carry;

	if (sum >= 10)
		carry = 1;
	else
		carry = 0;
	return (sum % 10);
}

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		op = add_digits(dr1, dr2, add);
		*(r + bg) = op + 48;
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
			bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
