#include "lists.h"
/**
 * insert_nodeint_at_index - inset node at specified index
 * @head: pointer to a listint_t pointer
 * @idx: node position
 * @n: data
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *ptr;
	unsigned int x;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	ptr = *head;

	if (idx == 0)
	{
		p->next = ptr;
		*head = p;
		return (p);
	}
	x = 0;
	while (x < idx - 1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		x++;
	}
	p->next = ptr->next;
	ptr->next = p;
	return (p);
}
