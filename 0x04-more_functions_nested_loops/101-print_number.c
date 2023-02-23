#include "main.h"
/**
 * print_number - displays a number
 * @n: number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
