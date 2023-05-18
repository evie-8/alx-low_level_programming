#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: point where to delete
 * Return: 1 success -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0, len = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
		return (delete_start(head));
	p = *head;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	if (index >= len)
		return (-1);
	p = *head;
	while (i < index)
	{
		p = p->next;
		i++;
	}
	if (p->next != NULL)
		p->next->prev = p->prev;
	if (p->prev != NULL)
		p->prev->next = p->next;
	if (p == *head)
		*head = p->next;
	free(p);
	p = NULL;
	return (1);
}

/**
 * delete_start - node at start
 * @head: pointer
 * Return: success 1 -1 failure
 */
int delete_start(dlistint_t **head)
{
	dlistint_t *t;

	t = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(t);
	t = NULL;
	return (1);
}
