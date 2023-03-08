#include "main.h"
/**
 * sqrt1 - checks for square root of a number
 * @n: number whose square root we want
 * @low: start
 * @high: end
 * Return: sqrt if a natural square number and -1 if not
 */
int sqrt1(int n, int low, int high)
{
	long int mid, sq;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (mid == low)
		return (-1);
	sq = mid * mid;

	if (sq == n)
		return (mid);
	else if (sq < n)
		return (sqrt1(n, mid, high));
	else
		return (sqrt1(n, low, mid));
}

/**
 * _sqrt_recursion - find square root
 * @n: number whose square root we want to know
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	else
		return (sqrt1(n, 0, (n / 2) + 1));
}
