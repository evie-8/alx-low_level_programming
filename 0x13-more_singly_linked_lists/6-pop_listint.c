#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to structure pointer
 * Return: data of head
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int g;

	if (head == NULL)
		return (0);
	t = *head;
	if (t == NULL)
	{
		g = t->n;
		free(t);
		return (g);
	}
	*head = (*head)->next;
	g = t->n;
	free(t);
	return (g);
}
