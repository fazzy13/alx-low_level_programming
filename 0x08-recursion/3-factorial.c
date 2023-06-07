/**
 * factorial - calculates the factorial of a given number
 * @n: the number for which to calculate the factorial
 *
 * Return: the factorial of n, or -1 if n is negative (indicating an error)
 */
int factorial(int n)
{

	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

