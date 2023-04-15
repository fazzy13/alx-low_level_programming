/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to find the square root of
 *
 * Return: The natural square root of the number, or -1 if not found
 */

int _sqrt_recursion(int n)
{
	int sqrtRecursive(int n, int guess);	

	/* Base case: If n is negative, return -1 */
	if (n < 0)
		return (-1);

	/* Call the helper function to calculate square root */
	return (sqrtRecursive(n, 0));
}

/**
 * sqrtRecursive - Helper function to calculate square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int sqrtRecursive(int n, int guess)
{
	/* Base case: If guess squared equals n, return guess */
	if (guess * guess == n)
		return (guess);
	/* Base case: If guess squared is greater than n, return -1 */
	else if (guess * guess > n)	
		return (-1);
	/* Recursive case: Increment guess and continue recursion */
	else
		return (sqrtRecursive(n, guess + 1));
}
