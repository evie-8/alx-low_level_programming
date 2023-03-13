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

	array = malloc(size * sizeof(c));
	if (array == NULL || size == 0)
		return (NULL);
	memset(array, c, size);
	return (array);
}
