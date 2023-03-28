#include <ctype.h>

/**
* _isdigit - fuction to check super chars
*
* @c: character to check
*
* Return: exit point of the programm
*/

int _isdigit(int c)
{
	
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
