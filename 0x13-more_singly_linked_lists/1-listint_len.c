#include "lists.h"
#include <stdio.h>
/**
 * listint_len - number of nodes
 * @h: first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	int i = 0;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
