#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number whose factorial we are calculating
 * Return: value of factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
