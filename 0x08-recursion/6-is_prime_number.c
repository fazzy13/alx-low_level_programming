/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The input integer to check for primality.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisibility(n, 2));
}

/**
 * check_divisibility - Helper function to check if a number is divisible
 *			by any number from a given starting point.
 * @n: The number to check for divisibility.
 * @divisor: The starting divisor to check from.
 *
 * Return: 1 if @n is only divisible by itself and 1, 0 otherwise.
 */
int check_divisibility(int n, int divisor)
{
	if (divisor == n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_divisibility(n, divisor + 1));
}

