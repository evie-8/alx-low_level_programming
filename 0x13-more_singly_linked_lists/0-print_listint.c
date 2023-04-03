#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements in node.
 * @h: first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	int i = 0;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
