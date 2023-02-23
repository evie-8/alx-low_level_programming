#include <stdio.h>
/**
 * main - larest prime factor of the number 612852475143
 * Return: 0 if success
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i, j, count;

	for (i = 2; i <= n; i++)
	{
	for (j = 1; j <= i; j++)
	{
		if ((i % j) == 0)
		{
		count++;
		}
	}
		if (count == 2 && (n % i) == 0)
			printf("%lu", i);
		count = 0;
	}
	return (0);
	}
