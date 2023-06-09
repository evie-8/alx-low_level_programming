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
	int index;
	hash_node_t *new, *i;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	i = ht->array[index];
	while (i)
	{
		if (strcmp(i->key, key) == 0)
		{
			free(i->value);
			i->value = strdup(value);
			return (1);
		}
		i = i->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
