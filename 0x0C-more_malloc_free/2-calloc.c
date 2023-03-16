#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory and each bit is intialized to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	p = (char *)c;
	for (i = 0; i < nmemb; i++)
		*(p + i) = 0;
	return (c);
}
