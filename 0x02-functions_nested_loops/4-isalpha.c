#include <ctype.h>

/**
* _isalpha - Check for uppercase
*
* @c: returns upper or lower
*
* Return: return 1 else 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
