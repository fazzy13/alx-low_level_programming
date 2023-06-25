#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to an array of integers
 * @size: Size of the array
 * @action: Pointer to a function to be executed on each element of the array
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return; /* Return early if array or action is NULL */
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
		/* Call the func pointed to by action on each element of the array */
	}
}

