/**
 * factorial - calculates the factorial of a given number
 * @n: the number for which to calculate the factorial
 *
 * Return: the factorial of n, or -1 if n is negative (indicating an error)
 */
int factorial(int n)
{
    /* Base case: factorial of 0 is 1 */
    if (n == 0)
        return 1;

    /* Error case: factorial of negative numbers is not defined */
    if (n < 0)
        return -1;

    /* Recursive case: multiply n with factorial of (n-1) */
    return n * factorial(n - 1);
}

