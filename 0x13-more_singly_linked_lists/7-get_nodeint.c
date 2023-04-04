#include "lists.h"
/**
 * get_nodeint_at_index - get node at specified index
 * @head: first node
 * @index: node position
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
