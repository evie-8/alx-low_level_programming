#include "hash_tables.h"
/**
 * hash_table_delete - delete table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *n;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				while (ht->array[i]->next)
				{
					n = ht->array[i]->next;
					ht->array[i]->next = n->next;
					free(n->key);
					free(n->value);
					free(n);
				}
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
