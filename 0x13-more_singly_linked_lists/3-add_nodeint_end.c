#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node to beginning of list
 * @head: first node
 * @n: int
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *t;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = ptr;
	return (ptr);
}
