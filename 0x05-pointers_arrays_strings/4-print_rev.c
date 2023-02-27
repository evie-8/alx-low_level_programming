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
	count--;
	for (i = count; i >= 0; i--)
	{
	s--;
	_putchar(*s);
	}
	_putchar('\n');
}
