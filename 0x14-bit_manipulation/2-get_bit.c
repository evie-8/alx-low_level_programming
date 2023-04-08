#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bix at specified index
 * @n: number
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j, rem;
	unsigned long int num, num1;

	num = n;
	num1 = n;
	i = 0;
	while (n != 0)
	{
		n = n >> 1;
		i++;
	}
	if (index >= i)
		return (-1);
	for (j = 0; j <= index; j++)
	{
		num1 = num;
		num = num >> 1;
		rem = num1 - (num << 1);
	}
	return (rem);
}
