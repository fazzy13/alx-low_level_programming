#include <stdio.h>

/**
 * *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 **/

int main(void)
{
	int tenz;
	int onez;
	int tz;
	int oz;

	for (tenz = '0'; tenz <= '9'; tenz++)
	{
		for (onez = '0'; onez <= '9'; onez++)
		{
			for (tz = tenz; tz <= '9'; tz++)
			{
				for (oz = onez + 1; oz <= '9'; oz++)
				{
					putchar(tenz);
					putchar(onez);
					putchar(' ');
					putchar(tz);
					putchar(oz);

					if (!((tenz == '9' && onez == '8') && (tz == '9' && oz == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				oz = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
