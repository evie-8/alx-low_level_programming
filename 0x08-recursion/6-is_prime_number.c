#include "main.h"
/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 if not prime
 */
int is_prime_number(int n)
{
	int i, count = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
				count++;
		}
		if (count == 2)
			return (1);
	}
	return (0);
}
