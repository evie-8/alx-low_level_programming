#include "main.h"
/**
 * print_line - prints underscore
 * @n: value to be entered
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = n; i >= 1 ; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
