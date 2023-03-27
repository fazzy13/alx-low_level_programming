#include <ctype.h>

/**
* _isupper - fuction to check super chars
*
* @c: character to check
*
* Return: exit point of the programm
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
