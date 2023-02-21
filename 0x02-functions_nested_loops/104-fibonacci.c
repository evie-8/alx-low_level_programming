#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int num;
	int i;

	printf("%ld, %ld, ", num1, num2);
	for (i = 2; i <= 96; i++)
	{
	num = num1 + num2;
	printf("%ld", num);
	if (i != 96)
	{
	printf(",");
	printf(" ");
	}
	num1 = num2;
	num2 = num;
	}
	printf("\n");
	return (0);
}
