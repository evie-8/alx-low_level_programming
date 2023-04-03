#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node to beginning of list
 * @head: first node
 * @n: int
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;

	p->next = *head;
	*head = p;
	return (*head);
}
