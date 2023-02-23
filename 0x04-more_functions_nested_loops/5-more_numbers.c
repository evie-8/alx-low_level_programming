#include "main.h"
/**
 * more_numbers - numbers from 0 to 14
 */
void more_numbers(void)
{
	int num, i;

	for (i = 1; i <= 10; i++)
	{
	num = 0;
	while (num <= 14)
	{
		if (num >= 10)
		{
		_putchar('1');
		}
		_putchar((num % 10) + '0');
		num++;
	}
	_putchar('\n');
	}
}
