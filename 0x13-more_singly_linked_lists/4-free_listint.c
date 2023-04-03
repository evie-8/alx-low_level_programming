#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free memory
 * @head: start node
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (head != NULL)
	{
		h = h->next;
		free(head);
		head = h;
	}
}
