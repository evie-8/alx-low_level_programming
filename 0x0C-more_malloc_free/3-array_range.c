#include "main.h"
#include <stdlib.h>
/**
 * array_range - an array
 * @min: first element
 * @max: last element
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (0);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (0);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
