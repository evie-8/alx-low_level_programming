#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node to beginning of list
 * @head: first node
 * @str: string
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
