#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * linear_search - using a linear seach
 * @array: pointer to first element of an array
 * @size: size of array
 * @value: value to be searched
 * Return: value found
 */
int linear_search(int *array, size_t size, int value)
{
	int found = 0;
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
		return (i);
	else
		return (-1);
}
