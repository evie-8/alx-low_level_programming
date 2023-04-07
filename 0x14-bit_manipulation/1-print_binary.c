#include "main.h"
/**
 * print_binary - prints in binary form
 * @n:  number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num = n;
	n = n >> 1;
	if (n != 0)
		print_binary(n);
	_putchar(num - (n << 1) + '0');
}
