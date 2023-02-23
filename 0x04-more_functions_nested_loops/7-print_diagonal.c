#include "main.h"
/**
* print_diagonal - prints diagonally
* @n: value to enter
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
