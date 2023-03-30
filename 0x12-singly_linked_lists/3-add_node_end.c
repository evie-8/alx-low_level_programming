#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node to beginning of list
 * @head: first node
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *t;
	
	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
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
