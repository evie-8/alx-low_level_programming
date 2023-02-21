#include "main.h"
/**
 * print_times_table - print multiplication table
 *@n: parameter
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
	_putchar ('0');
	for (j = 1; j <= n; j++)
	{
	product = i * j;
	_putchar(',');
	_putchar(' ');
	if (product <= 99)
	_putchar(' ');
	if (product  <= 9)
	_putchar(' ');
	if (product >= 100)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10) % 10) + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
}
}
