#include <stdio.h>
/**
 * main - sum of fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	int i;
	long int num, sum;

	sum = 2;
	for (i = 2; i <= 31; i++)
	{
	num = n1 + n2;
	if ((num % 2) == 0)
	{
	sum = sum + num;
	}
	n1 = n2;
	n2 = num;
	}
	printf("%ld\n", sum);
	return (0);
}
