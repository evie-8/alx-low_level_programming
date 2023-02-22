#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num, a1, a2, b1, b2;
	int i;

	printf("%lu, %lu, ", num1, num2);
	for (i = 2; i <= 91; i++)
	{
	num = num1 + num2;
	printf("%lu", num);
	if (i <= 91)
	{
	printf(",");
	printf(" ");
	}
	num1 = num2;
	num2 = num;
	}
	a1 = num1 / 1000000000;
	a2 = num1 % 1000000000;
	b1 = num2 / 1000000000;
	b2 = num2 % 1000000000;
	for (i = 92; i <= 98; i++)
	{
		printf("%lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
		if (i != 98)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
