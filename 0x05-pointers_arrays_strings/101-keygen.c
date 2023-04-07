/**
* main - a program that generates random valid passwords for the program 101-crackme.
*
* Return: Always (0)
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random;
	int add;
	int sum;

    srand(time(NULL));

    for (add = 0; (sum = 2772); sum > 122; add++)
	{

		random = (rand() % 125) + 1;
		printf("%c", random);
		sum -= random;
        
    }

    printf("%c", sum);

    return 0;
}

