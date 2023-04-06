#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - a program that generates random valid passwords for the program 101-crackme.
*
* Return: Always (0)
*
*/

#define PASSWORD_LENGTH 10
 int main(void)
{
	char pass[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0 i < PASSWORD_LENGTH; I++)
	{
		int characters;

		while (!isalnum(characters))
		{
			character = rand() % 127;
			characters++;
		}
		pass[i] = characters;
	}
	pass[PASSWORD_LENGTH] = '\0';

	return (0);
}