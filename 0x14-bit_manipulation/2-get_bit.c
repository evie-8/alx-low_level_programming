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
	unsigned int j, rem;
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	for (j = 0; j <= index; j++)
	{
		num = n;
		n = n >> 1;
		rem = num - (n << 1);
	}
	return (rem);
}
