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
	_putchar((d % 10));
	return (d % 10);
}
