#include "main.h"
/**
 * print_rev - reverse string
 * @s: string
*/
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	for (i = c; i >= 0; i--)
	{
		if (*s == '\0')
		{
			c = c - 1;
		}
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
