 /**
 * _atoi - Convert a string to an integer
 *
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	unsigned int sign = 1,
	int num = 0,
	unsigned start = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			start = 1;
			num = num * 10 + (*s - '0');

			if (num < 0)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
		}
			else if (start)
			break;

		s++;
	}

	return (num * sign);
}

