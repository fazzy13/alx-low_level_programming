i#include <string.h>

/**
* reverse_array - a function that reverses the content of an array of integers.
*
* @a: the string to be reversed
*
* @n: n is the number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int first_index = 0;
	int last_index = n - 1;
	int temp;

	while (first_index < last_index)
	{

		temp = a[first_index];
		a[first_index] = a[last_index];
		a[last_index] = temp;

		first_index++;
		last_index--;
	}
}
