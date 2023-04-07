#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _is_binary - checks string
 * @s: string
 * Return: array
 */
unsigned int *_is_binary(const char *s)
{
	int j, i = 0;
	unsigned int *arr;

	i = strlen(s);
	arr = malloc(sizeof(unsigned int) * i);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		if (s[j] == '1' || s[j] == '0')
		{
			if (s[j] == '1')
				arr[j] = 1;
			else
				arr[j] = 0;

		}
		else
		{
			return (NULL);
		}
	}
	return (arr);
}
/**
 * binary_to_uint - from binary to unsigned int
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int *num, sum = 0;
	int y;

	if (b == NULL)
		return (0);

	num = malloc(sizeof(unsigned int) * strlen(b));
	num = _is_binary(b);
	if (num == NULL)
		return (0);

	for (y = strlen(b) - 1; y >= 0; y--)
	{
		sum += num[strlen(b) - y - 1] << y;
	}
	return (sum);
}
