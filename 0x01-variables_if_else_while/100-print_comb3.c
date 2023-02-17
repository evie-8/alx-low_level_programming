#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 if success
 */
int main(void)
{
	int number1 = 48;
	int number2;

	while (number1 <= 57)
	{
	number2 = number1 + 1;
	while (number2 <= 57)
	{
	putchar(number1);
	putchar(number2);
	if (number1 < 57)
	{
	putchar(',');
	putchar(' ');
	}
	number2++;
	}
	number1++;
	}
	putchar('\n');
	return (0);
}
