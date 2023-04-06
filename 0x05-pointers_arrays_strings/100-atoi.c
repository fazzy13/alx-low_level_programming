/**
 * _atoi - Convert a string to an integer
 *
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	unsigned int sign = 1;
	unsigned long int num = 0;
	unsigned int start = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			start = 1;
			num = num * 10 + (*s - '0');

			if (num > INT_MAX)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MAX);
			}
		}
			else if (start)
			break;

		s++;
	}

	return (num * sign);
}

