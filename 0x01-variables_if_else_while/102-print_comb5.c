#include <stdio.h>
/**
 * main - start point
 *
 * Return: 0 successful
 */
int main(void)
{
	int number;
	int number1;

	for (number = 0; number <= 98; number++)
	{
	for (number1 = number + 1; number1 <= 99; number1++)
	{
	putchar((number / 10) + '0');
	putchar((number % 10) + '0');
	putchar(' ');
	putchar((number1 / 10) + '0');
	putchar((number1 % 10) + '0');
	if (number == 98 && number1 == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
