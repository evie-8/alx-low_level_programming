#include "main.h"
/**
 * jack_bauer - prints every minute of every hr
 *
 */
void jack_bauer(void)
{
	int n = 0;
	int d;
	int j;
	int i;

	while (n <= 2)
	{
		d = 0;
		while (d <= 9)
		{
		if ((n <= 1 && d <= 9) || (n <= 2 && d <= 3))
		{
		j = 0;
			while (j <= 5)
			{
			i = 0;
				while (i <= 9)
				{
				_putchar(n + '0');
				_putchar(d + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(i + '0');
				_putchar('\n');
				i++;
				}
			j++;
			}
		d++;
		}
		else
		{
			break;
		}
		}
		n++;
	}
}

