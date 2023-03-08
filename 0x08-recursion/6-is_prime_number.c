#include "main.h"
/**
 * check_prime - helper function that recursively checks if number is prime
 * @n: number to be checked
 * @divisor: current divisor being checked
 * Return: 1 if prime and 0 if not prime
 */
int check_prime(int n, int divisor)
{
	if (n <= 1 || (n != 2 && n % 2 == 0))
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 2));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 if not prime
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(n, 3));
}

























