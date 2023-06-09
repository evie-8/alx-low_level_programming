#include "hash_tables.h"
/**
 * hash_table_print - prints elements in a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 1;
	hash_node_t *p;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("'%s': '%s'", p->key, p->value);
			if (p->next != NULL)
				printf(", ");
			p = p->next;
			c++;
		}
		if (ht->array[i + 1] != NULL && c > 1)
			printf(", ");
	}
	printf("}\n");
}
