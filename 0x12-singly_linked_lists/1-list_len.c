#include "lists.h"
#include <stdio.h>
/**
 * list_len - number of nodes
 * @h: first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
