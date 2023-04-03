#include "lists.h"
/**
 * get_nodeint_at_index - get node at specified index
 * @head: first node
 * @index: node position
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0, x = 0;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p = head;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	if (index >= i)
		return (NULL);
	p = head;
	while (x < i && x == index)
	{
		p = p->next;
		x++;
	}
	return (p);
}
