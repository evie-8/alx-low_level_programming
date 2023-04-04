#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to a listint_t pointer
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = (*head);
		(*head) = next;
	}
	(*head) = before;
	return (*head);
}
