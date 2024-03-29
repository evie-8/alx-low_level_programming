#include "main.h"
/**
 * flip_bits - number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1)  != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
