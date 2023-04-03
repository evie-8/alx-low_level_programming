#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free memory
 * @head: start node
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	h = *head;
	while (*head != NULL)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	head = NULL;
}
