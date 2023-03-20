#include <stdio.h>
/**
* main - Entry point of the programm
*
* Return: the return and exit point
*
**/

int main(void)
{

	printf("Size of a char is: %c byte(S)\n", sizeof(char));
	printf("Size of an int is: %d byte(s)\n", sizeof(int));
	printf("Size of a long int is: %llu byte((s)\n", sizeof(long int);
	printf("Size of a long long int is: %lli byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %f byte(S)\n", sizeof(float));

	return (0);
}
