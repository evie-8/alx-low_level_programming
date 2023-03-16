#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory and each bit is intialized to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	memset(c, 0, nmemb);
	return (c);
}
