#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - finds sum of diagonal elements
 * @a: 2D array
 * @size: size of rows and columns of square matrix
 */
void print_diagsums(int *a, int size)
{
	int rows, columns;
	int sum = 0, sum2 = 0;

	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			if (rows == columns)
				sum += a[rows * size + columns];
			if (columns == size - 1 - rows)
				sum2 += a[rows * size + columns];
		}
	}
	printf("%d, %d\n", sum, sum2);
}
