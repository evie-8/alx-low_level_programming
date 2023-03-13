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
	memset(array, c, size);
	if (array == NULL || size == 0)
		return (NULL);
	else
		return (array);
}
