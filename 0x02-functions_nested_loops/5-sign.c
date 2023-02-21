#include "main.h"
/**
 * print_sign - checks if vslue is less than, greater than or equal to zero
 *
 * @n: argument that will be passed when function is called
 *
 * Return: 1 if greater than 0, 0 is equal to 0, -1 if less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


