#include "lists.h"
/**
 * add_dnodeint - add node at beginning
 * @head: contains address
 * @n: data
 * Return: new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->prev = NULL;
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
