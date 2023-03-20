#include <stdio.h>
/**
* main - Entry point of the programm
*
* Return: the return and exit point
*
**/

int main(void)
{
	char size_char = sizeof(char);
	int size_int = sizeof(int);
	long int size_long = sizeof(long int);
	long long int size_long_long = sizeof(long long int);
	float size_float = sizeof(float);

	printf("Size of a char is: %c", size_char);
	printf("Size of an int is: %d", size_int);
	printf("Size of a long int is: %d", size_long);
	printf("Size of a long long int is: %d", size_long_long);
	printf("Size of a float is: %f", size_float);

	return (0);

}
