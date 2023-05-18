#include "lists.h"
/**
 * dlistint_len - return number of nodes
 * @h: contains first node address
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
