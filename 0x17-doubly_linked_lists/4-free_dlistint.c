#include "lists.h"
/**
 * free_dlistint - free memory of double linked list
 * @head: contains address of first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	if (head == NULL)
		return;
	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
