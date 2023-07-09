#include "main.h"
#include <stddef.h`>
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Creates a mask with a 1 in the desired bit position */
	unsigned long int mask = 1UL << index;

	/* Performs bitwise OR to set the bit to 1 */
	*n |= mask;

	return (1);
}

