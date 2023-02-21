#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @d: argument to be passed
 *
 * Return: remainder if successful
 */
int print_last_digit(int d)
{
	int remainder;

	remainder = d % 10;
	if (remainder < 0)
	{
		remainder = remainder * -1;
	}
	_putchar(remainder + '0');
	return (remainder);
}
