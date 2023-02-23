#include "main.h"
/**
 * print_most_numbers - prints all numbers aprt from 2 and 4
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if (num == 50)
		{
		num = 51;
		}
		if (num == 52)
		{
		num = 53;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
