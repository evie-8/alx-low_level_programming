#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creating an array
 * @size: size of array
 * @c: character
 * Return: pointer to character
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(c));
	memset(array, c, size);
	if (array == NULL)
		return (NULL);
	else
		return (array);
	free(array);
}
