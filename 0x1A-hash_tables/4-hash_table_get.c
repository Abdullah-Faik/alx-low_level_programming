#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;

	if (ht == NULL || key == NULL || ht->size == 0)
	{
		return (NULL);
	}
	indx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[indx] == NULL || ht->array[indx]->value == NULL)
	{
		return (NULL);
	}
	return (ht->array[indx]->value);
}
