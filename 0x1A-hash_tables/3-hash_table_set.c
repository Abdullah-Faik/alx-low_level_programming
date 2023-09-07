#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx, i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL ||
			ht->size == 0 || ht->array == NULL)
	{
		return (0);
	}
	indx = key_index(key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key =  strdup(key);
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
