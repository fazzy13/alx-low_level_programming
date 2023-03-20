#include <stdio.h>
/**
* main - Entry point of the programm
*
* Return: the return and exit point
*
**/

int main(void)
{

	printf("Size of a char is: %zu byte(s)", sizeof(char));
	printf("Size of an int is: %zu byte(s)", sizeof(int));
	printf("Size of a long int is: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int is: %zu byte(s)", sizeof(long long int));
	printf("Size of a float is: %zu byte(s)", sizeof(float));

	return (0);

}
