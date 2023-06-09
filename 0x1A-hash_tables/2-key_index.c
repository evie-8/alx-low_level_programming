#include "hash_tables.h"
/**
 * key_index - key index
 * @key: used to calculate the index
 * @size: size of array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2((unsigned char *)key) % size;
	return (index);
}
