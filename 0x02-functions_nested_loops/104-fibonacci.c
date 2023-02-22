#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long long int num1 = 1;
	unsigned long long int num2 = 2;
	unsigned long long int num;
	int i;

	printf("%llu, %llu, ", num1, num2);
	for (i = 2; i <= 97; i++)
	{
	num = num1 + num2;
	printf("%llu", num);
	if (i != 97)
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
