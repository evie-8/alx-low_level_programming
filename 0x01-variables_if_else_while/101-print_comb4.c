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
	int number3;

	while (number1 <= 57)
	{
	number2 = number1 + 1;
	while (number2 <= 57)
	{
	number3 = number2 + 1;
	while (number3 <= 57)
	{
	putchar(number1);
	putchar(number2);
	putchar(number3);
	if (number1 < 55)
	{
	putchar(',');
	putchar(' ');
	}
	number3++;
	}
	number2++;
	}
	number1++;
	}
	putchar('\n');
	return (0);
}

