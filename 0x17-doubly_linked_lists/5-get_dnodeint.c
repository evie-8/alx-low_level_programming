#include "lists.h"
/**
 * get_dnodeint_at_index - get node at that index
 * @head: pointer
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0, len = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	ptr = head;
	if (index >= len)
		return (NULL);
	if (index == 0)
		return (head);
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
