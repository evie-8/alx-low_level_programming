#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at specific position
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new, *p;
	unsigned int i = 0, len = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	ptr = *h;
	if (idx == 0 && *h == NULL)
	{
		*h = new;
		return (new);
	}
	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	if (idx >= len)
		return (NULL);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	ptr = *h;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	p = ptr->next;
	p->prev = new;
	new->next = p;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
