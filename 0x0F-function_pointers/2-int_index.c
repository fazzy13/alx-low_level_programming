#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to an array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to a function used to compare values
 *
 * Return: Index of the first element that matches, or -1
 * if no match or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1); /* Return -1 for invalid input */
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i); /* Return index of the first element that matches */
		}
	}

	return (-1); /* Return -1 if no match found */
}

