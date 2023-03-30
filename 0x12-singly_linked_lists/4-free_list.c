#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory
 * @head: start node
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
}
