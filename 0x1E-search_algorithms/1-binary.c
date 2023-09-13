#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - using a binary search
 * @array: pointer to first element of an array
 * @size: size of array
 * @value: value to be searched
 * Return: index where the value is found, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1;
	int mid;
	int i;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
