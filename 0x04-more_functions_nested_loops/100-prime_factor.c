#include <stdio.h>
#include <math.h>

/**
 * main - larest prime factor of the number 612852475143
 * Return: 0 if success
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i, j;
	double squared = sqrt(n);

	for (i = 1; i <= squared; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
		}
	}
	printf("%lu\n", j);
	return (0);
	}
