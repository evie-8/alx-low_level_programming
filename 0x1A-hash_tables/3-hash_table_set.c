#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add to
 * @key: key used to find at what index we should add at
 * @value: data stored
 * Return: 0 failure 1 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index, i;
	hash_node_t *new, *old;

	if (ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
		}
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		old = ht->array[index];
		old->next = new;
		ht->array[index] = new;
	}
	return (1);
}
