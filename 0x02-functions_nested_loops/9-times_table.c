#include "main.h"
/**
 * times_table - prints multiplication table from 0-9
 */
void times_table(void)
{
	int i, j;
	int product;

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i <= 9; i++)
	{
	product = j * i;
	if (product > 9)
	{
	int z = product / 10;
	int y = product % 10;

	_putchar(',');
	_putchar(' ');
	_putchar(z + '0');
	_putchar(y + '0');
	}
	else
	{
	if (i != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	_putchar(product + '0');
	}
	}
	_putchar('\n');
	}
}
