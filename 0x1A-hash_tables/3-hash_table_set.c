#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *node;

	if (ht == NULL || key == NULL ||
		ht->size == 0 || ht->array == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = node;
		node->next = NULL;
	}
	else
	{
		node->next = ht->array[indx];
		ht->array[indx] = node;
	}
	return (1);
}
