#include "main.h"

/**
* main - Entry point of the programm
*
* Return: Exist point of the programm
*
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
