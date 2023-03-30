#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements in node.
 * @h: first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i++;
	}
	return (i);
}
