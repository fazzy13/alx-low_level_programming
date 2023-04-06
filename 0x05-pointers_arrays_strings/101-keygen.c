#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - a program that generates random valid passwords for the program 101-crackme.
*
* Return: Always (0)
*
*/
/**
#define PASSWORD_LENGTH 10
 int main(void)
{
	char pass[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int characters;

		while (!isalnum(characters))
		{
			characters = rand() % 127;
			characters++;
		}
		pass[i] = characters;
	}
	pass[PASSWORD_LENGTH] = '\0';

	return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    srand(time(NULL)); // initialize random number generator with current time

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int c;
        do {
            c = rand() % 127; // generate random character code between 0 and 126
        } while (!isalnum(c)); // ensure character is alphanumeric
        password[i] = c;
    }

    password[PASSWORD_LENGTH] = '\0'; // null terminator

    printf("Random password: %s\n", password);

    return 0;
}

