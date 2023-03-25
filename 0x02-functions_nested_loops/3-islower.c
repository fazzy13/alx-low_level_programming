#include <ctype.h>

/**
* _islower - Check for lowercase
*
* @c: returns upper or lower
*
* Return: return 1 else 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
