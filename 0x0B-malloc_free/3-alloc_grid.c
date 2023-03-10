#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
	for (i = 0; i < height; i++)
		free(array[i]);
	free(array);
}
