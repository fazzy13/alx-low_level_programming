#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		/* Increment count if the least significant bit is set */
		count += diff & 1;
		/* Right shift diff to process the next bit */
		diff >>= 1;
	}

	return count;
}

