#include <ctype.h>

/**
* _isupper - fuction to check super chars
*
* @c: character to check
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
