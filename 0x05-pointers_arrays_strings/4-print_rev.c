#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = count; i >= 0; i--)
	{
	if (i == count)
	{
		count = count - 1;
	}
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
