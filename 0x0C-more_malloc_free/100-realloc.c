#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocating dynamic memory
 * @ptr: pointer to previously allocated memory
 * @old_size: number of bytes of previous memory block
 * @new_size: number of bytes to be allocated
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		ptr = malloc(old_size + (new_size - old_size));
	}
	memcpy(ptr, p, old_size);
	free(ptr);
	return (ptr);
}
