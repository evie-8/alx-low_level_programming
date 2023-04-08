#include "main.h"
#include <stdlib.h>
/**
 * set_bit - change value of bit
 * @n: number
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, j;
	unsigned long int num, *num1, *h, num2, t = *n, sum = 0;

	if (index >= (64))
		return (-1);
	i = 0;
	num = *n;
	while (*n != 0)
	{
		*n = *n >> 1;
		i++;
	}
	num1 = malloc(sizeof(long int) * i);
	if (index < i)
	{
	for (j = 0; j < i; j++)
	{
		num2 = num;
		num = num >> 1;
		num1[j] = num2 - (num << 1);
		if (j == index)
			num1[j] = 1;
		sum += num1[j] << j;
	}
	*n = sum;
	}
	else
	{
	h = malloc(sizeof(long int) * (index - i));
		for (j = i; j <= index; j++)
		{
			h[j - i] = 0;
		if (j == index)
			h[j - i] = 1;
		t += h[j - i] << j;
		}
	*n = t;
	}
	return (1);
}
