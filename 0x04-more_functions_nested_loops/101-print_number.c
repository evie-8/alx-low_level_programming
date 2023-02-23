#include "main.h"
/**
 * print_number - displays a number
 * @n: number to be printed
 */
void print_number(int n)
{
	  unsigned int number = n;

	if (n < 0)
	{
		n = n * -1;
		number = n;
		_putchar('-');
	}
	number = number / 10;
	if (number != 0)
	print_number(number);
	_putchar((unsigned int)n % 10 + '0');
}
