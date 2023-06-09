#include "hash_tables.h"
/**
 * hash_table_get - get data at that index
 * @ht: hash table
 * @key: used to get data
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *r;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);

	r = ht->array[i];
	while (r)
	{
		if (strcmp(r->key, key) == 0)
			return (r->value);
		r = r->next;
	}
	return (NULL);
}
