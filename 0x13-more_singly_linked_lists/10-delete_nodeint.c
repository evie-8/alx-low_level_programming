#include "lists.h"
/**
 * delete_nodeint_at_index - get node at specified index
 * @head: first node
 * @index: node position
 * Return: 1 if success and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *ptr1 = *head;
	unsigned int x = 0;

	if (ptr == NULL || ptr1 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		ptr1 = NULL;
		return (1);
	}

	while (x < index)
	{
		if (ptr1->next == NULL)
			return (-1);
		ptr = ptr1;
		ptr1 = ptr1->next;
		x++;
	}
	ptr->next = ptr1->next;
	free(ptr1);
	ptr1 = NULL;
	return (1);
}
