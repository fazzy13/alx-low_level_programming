#include <stdio.h>

/**
 * add_digits - Adds two digits with carry.
 * @digit1: The first digit.
 * @digit2: The second digit.
 * @carry: The carry from previous addition.
 *
 * Return: The sum of digit1, digit2, and carry.
 */
int add_digits(int digit1, int digit2, int *carry)
{
	int sum = digit1 + digit2 + *carry;
	*carry = sum / 10;
	return sum % 10;
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int carry = 0;
	int sum = 0;
	int i, j, k;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = add_digits(digit1, digit2, &carry);

		r[--k] = sum + '0';

		i--;
		j--;

		if (k == 0 && (i >= 0 || j >= 0 || carry > 0))
			return (0);
	}

	if (carry > 0)
		r[--k] = carry + '0';

	return (&r[k]);
}

